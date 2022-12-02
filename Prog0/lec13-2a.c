/***************************************
 * lec13-2a.c
 *
 * キューのサンプルプログラム。
 ***************************************/
#include <stdio.h>
#include <stdlib.h>

#define QSIZE 100

void enqueue(int);
int dequeue(void);

int queue[QSIZE];
int head = 0;
int tail = 0;

int main(){
  int data, status, i;

  while (1) {
    printf("input>> ");
    status = scanf("%d", &data);
    if (status != 1) break;
    /* 入力値が0の場合はデータ取り出し、それ以外ならデータを
       キューに追加する */
    if (data == 0) printf("Data: %d\n", dequeue() );
    else enqueue(data);
  }

  printf("\n");
  return 0;
}

void enqueue(int num){
  int next = (tail+1)%QSIZE;

  if (next == head) {
    /* キューがいっぱいの場合のエラー処理 */
    printf("Queue overflow!\n");
    exit (2);
  }
  queue[tail] = num;
  tail = next;
}

int dequeue(void){
  int val;

  if (head == tail) {
    /* キューが空の場合のエラー処理 */
    printf("Queue is empty!\n");
    exit (3);
  }
  val = queue[head];
  head = (head+1)%QSIZE;
  return val;
}
