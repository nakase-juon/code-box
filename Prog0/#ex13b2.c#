#include <stdio.h>
#include <stdlib.h>

#define STSIZE 50

void push(double);
double pop(void);
void display(void);

double stack[STSIZE];
int top=0;

int main(){
  int status;
  double data;

  while(1){
    printf("挿入:1, 取り出し:2, 表示:3, 終了:0>> ");
    scanf("%d",&status);
    if(status==0){
      break;
    }else if(status==1){
      scanf("%lf",&data);
      push(data);
    }else if(status==2){
      printf("  データ: %.3f\n",pop());
    }else if(status==3){
      display();
    }
  }
  return 0;
}

void push(double x){
  if(top==STSIZE){
    printf("Stack overflow!\n");
    exit(2);
  }
  stack[top]=x;
  top++;
}

double pop(void){
  if(top==0){
    printf("Stack is empty!\n");
    exit(3);
  }
  top--;
  return stack[top];
}

void display(void){
  printf("  [Stack]");
  for(int i=0;i<top;i++){
    printf(" %.3f ",stack[i]);
  }
  printf("\n");
}
