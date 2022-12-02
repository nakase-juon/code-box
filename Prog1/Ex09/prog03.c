#include <stdio.h>
#include <stdlib.h>
#include "stulist03.h"

int main()
{
  char *filename="/home/course/prog1/public_html/2020/ex/ex09/Student.dat";
  FILE *fp;
  Record data;
  int i,num,or,delid;

  head = make_1node(data, NULL);
  fp = fopen(filename,"r");
  if(fp == NULL){
    printf("File open error!\n");
    exit(1);
  }
  while(fscanf(fp,"%s %d %s",data.class,&data.id,data.name) != EOF){
    insert(data);
  }
  fclose(fp);
  listprint();

  while(1){
    printf("Chose operation (1: Insert, 0: delete, ^D: Finish) -> ");
    if(scanf("%d",&or) == EOF){
      printf("\n");
      break;
    }
    if(or == 1){
      printf("Insert new data: (class ID name) -> ");
      if(scanf("%s %d %s",data.class,&data.id,data.name) == EOF){
        printf("\n");
        break;
      }
      if (insert(data) == NULL){
        printf("Data %d is already on the list!\n", data.id);
      }
      listprint();
    }else if(or == 0){
      printf("Delete ID -> ");
      scanf("%d",&delid);
      if(delete(delid) == NULL){
        printf("ID %d is not found.\n",delid);
      }else{
        listprint();
      }
    }
  }
  return 0;
}

NodePointer insert(Record data)
{
  NodePointer newnode,last;

  last = head;
  if (finditem(data.id) == NULL) {
    while(last->next != NULL){
      last = last->next;
    }
    newnode = make_1node(data, NULL);
    last->next = newnode;
    return newnode;
  }else{
    return NULL;
  }
}

void listprint(void)
{
  NodePointer n;

  printf("Head - \n");
  for (n = head->next; n != NULL; n = n->next) {
    printf("   %s", n->data.class);
    printf(" %d",n->data.id);
    printf(" %s\n",n->data.name);
  }
  printf("\n");
}

NodePointer finditem(int keydata)
{
  NodePointer n;

  for (n = head; n->next != NULL; n = n->next) {
    if (n->next->data.id == keydata){
      return n;
    }
  }

  return NULL;
}

NodePointer make_1node(Record keydata, NodePointer p)
{
  NodePointer n;

  if ((n = (NodePointer)malloc(sizeof(struct node))) == NULL) {
    printf("Error in memory allocation\n");
    exit(8);
  }

  n->data = keydata;
  n->next = p;

  return n;
}

NodePointer delete(int x){
  NodePointer n,delnode;

  if((n = finditem(x)) != NULL){
    delnode = n->next;
    n->next = delnode->next;
    free(delnode);
    return n;
  }else{
  return NULL;
  }
}
