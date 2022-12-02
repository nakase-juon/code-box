/*****************************************
 * lec09-4.c
 *
 * 二次元配列の初期化（３種類）
 *
 *****************************************/

#include <stdio.h>
#define GYO   2
#define RETSU 3

int main(){
  int data1[GYO][RETSU] = {1, 2, 3, 4, 5, 6};
  int data2[GYO][RETSU] = {{1, 2, 3}, {4, 5, 6}};
  int data3[][RETSU] =    {{1, 2, 3}, {4, 5, 6}};
  int i, j;
  
  /* data1 display */
  printf("data1:\n");
  for(i = 0; i < GYO; i++){
    for(j = 0; j < RETSU; j++){
      printf("%2d ",data1[i][j]);
    }
    printf("\n");
  }
  
  /* data2 display */
  printf("\ndata2:\n");
  for(i = 0; i < GYO; i++){
    for(j = 0; j < RETSU; j++){
      printf("%2d ",data2[i][j]);
    }
    printf("\n");
  }
  
  /* data3 display */
  printf("\ndata3:\n");
  for(i = 0; i < GYO; i++){
    for(j = 0; j < RETSU; j++){
      printf("%2d ",data3[i][j]);
    }
    printf("\n");
  }
  return 0;
}
