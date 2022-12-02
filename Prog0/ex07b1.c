#include<stdio.h>

int main() {
  int n[8];
  int a=-100000,b=100000;
  printf("8個の整数を空白で区切って入力してください。\n");
  for(int i=0;i<8;i++){
    scanf("%d",&n[i]);
    if(n[i]>=a){
      a=n[i];
    }
    if(n[i]<=b){
      b=n[i];
    }
  }
  printf("最大値は%dです。\n",a);
  printf("最小値は%dです。\n",b);
  printf("入力された整数の表示\n");
  for(int i=0;i<8;i++){
    printf("%d ",n[i]);
  }
  printf("\n");
  return 0;
}
