#include <stdio.h>
#include <stdlib.h>

#define QSIZE 100

int isFull(void);
int isEmpty(void);
void enqueue(int);
int dequeue(void);

int queue[QSIZE];
int head = 0;
int tail = 0;

int main(){
  int data, status;

  while(1){
    printf("input>> ");
    status = scanf("%d", &data);
    if(status != 1){
      break;
    }
    if(data == 0){
      printf("Data: %d\n", dequeue() );
    }else{
      enqueue(data);
    }
  }
  printf("\n");
  return 0;
}

int isFull(void){
  int next=(tail+1)%QSIZE;
  if(next==head){
    return 1;
  }else{
    return 0;
  }
}

void enqueue(int num){
  if(isFull()==1){
    printf("Queue overflow!\n");
    exit (2);
  }
  queue[tail] = num;
  tail = (tail+1)%QSIZE;
}

int isEmpty(void){
  if(head==tail){
    return 1;
  }else{
    return 0;
  }
}

int dequeue(void){
  int val;
  if(isEmpty()==1){
    printf("Queue is empty!\n");
    exit (3);
  }
  val = queue[head];
  head = (head+1)%QSIZE;
  return val;
}
