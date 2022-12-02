#include <stdio.h>
#include <stdlib.h>
#include "stulist01.h"

int main()
{
  Record data;
  int i,num;

  head = make_1node(data, NULL);
  listprint();
  
  while (1) {
    printf("Insert new data: (class ID name) -> ");
    if(scanf("%s %d %s",data.class,&data.id,data.name) == EOF){
      printf("\n");
      break;
    }
    if (insert(data) == NULL) printf("Data %d is already on the list!\n", data.id);
    listprint();
  }
  return 0;
}

NodePointer insert(Record data)
{
  NodePointer newnode;

  if (finditem(data.id) == NULL) {
    newnode = make_1node(data, head->next);
    head->next = newnode;

    return newnode;
  }
  else return NULL;
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
    if (n->next->data.id == keydata) return n;
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
