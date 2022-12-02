#include<stdio.h>

int main() {
  int dataset[15]={1,5,12,15,23,30,34,45,50,56,67,70,78,89,90};
  int n;
  printf("添字を入力してください: ");
  scanf("%d",&n);
  if(n>=15){
    printf("範囲外です！\n");
  }else if(dataset[n]%3==0){
    printf("dataset[%d]=%d\n",n,dataset[n]);
    printf("  3の倍数です\n");
  }else{
    printf("dataset[%d]=%d\n",n,dataset[n]);
    printf("  3の倍数ではありません\n");
  }
  return 0;
}
