#include <stdio.h>

int main() {
  int n,s=1;
  printf("階乗を計算したい数を入力してください : ");
  scanf("%d",&n);
  if(n>=13 || n<0){
    printf("計算できません\n");
  }else if(n==0){
    printf("1\n");
  }else{
    for(int i=n;i>0;i--){
      s *= i;
    }
    printf("%d\n",s);
  }
  return 0;
}
