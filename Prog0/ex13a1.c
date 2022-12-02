#include <stdio.h>
#include <stdlib.h>

#define STSIZE 100

void push(double);
double pop(void);

double stack[STSIZE];
int top=0;

int main(){
  int status;
  double data;
  
  while(1){
    printf("挿入：[1 データ], 取り出し[2] >> ");
    scanf("%d",&status);
    if(status!=1&&status!=2){
      break;
    }else if(status==2){
      printf(" 取り出したデータ: %.3f\n",pop());
    }else{
      scanf("%lf",&data);
      push(data);
    }
  }
  printf("\n");
  return 0;
}

 void push(double num){
   if(top==STSIZE){
     printf("溢れてるよ!\n");
     exit(2);
   }
   stack[top]=num;
   top++;
 }

double pop(void){
  if(top==0){
    printf("空だよ!\n");
    exit(3);
  }
  top--;
  return stack[top];
}
