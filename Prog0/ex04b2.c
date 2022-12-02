#include <stdio.h>

int main() {
  int a;
  char c;
  printf("点数を入力してください");
  scanf("%d",&a);
  printf("点数：%d点 評価：",a);
  if(a>=90 && a<=100){
    printf("S\n");
  }else if(a>=80 && a<90){
    printf("A\n");
  }else if(a>=65 && a<80){
    printf("B\n");
  }else if(a>=50 && a<65){
    printf("C\n");
  }else if(a>=35 && a<50){
    printf("D\n");
  }else if(a>=0 && a<35){
    printf("F\n");
  }else{
    printf("入力された値が異常\n");
  }
  return 0;
}
  
