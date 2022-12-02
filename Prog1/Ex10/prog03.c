#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stulist05.h"

void listprint_sel(char *);

int main()
{
  char *filename="/home/course/prog1/public_html/2020/ex/ex09/Student.dat";
  FILE *fp;
  Record data;
  int i,num;
  int flg=0;
  char s[10];

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

  while (1) {
    printf("Input match data(class or ID) -> ");
    if(scanf("%s",s) == EOF){
      printf("\n");
      break;
    }else{
      listprint_sel(&s[0]);
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

void listprint_sel(char *s){
  int m;
  char s2[100];
  NodePointer n;
  
  for(int i=0;i<10;i++){
    if(s[i]=='\0'){
      m=i;
      break;
    }
  }
  if(s[0]>='0'&&s[0]<='9'){
    for(n = head->next; n != NULL; n = n->next){
      sprintf(s2,"%d",n->data.id);
      if((strncmp(s2,s,m)) == 0){
	printf("   %s", n->data.class);
	printf(" %d",n->data.id);
	printf(" %s\n",n->data.name);
      }
    }
  }else{
    for(n = head->next; n != NULL; n = n->next){
      if((strcmp(s,n->data.class)) == 0){
	printf("   %s", n->data.class);
	printf(" %d",n->data.id);
	printf(" %s\n",n->data.name);
      }
    }
  }
}
