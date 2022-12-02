#include <stdio.h>

double arctan(int);

int main(){
  int a;
  printf("級数の計算上限となる数を奇数で入力してください: ");
  scanf("%d",&a);
  if(a%2==0){
    printf("奇数を入力してください\n");
  }else{
    printf("%dまで計算した場合の pi の値: %f\n",a,arctan(a));
  }
  return 0;
}

double arctan(int n){
  double m=0.0;
  for(int i=1;i<=n;i+=4){
    m+=1.0/(double)i;
  }
  for(int i=3;i<=n;i+=4){
    m-=1.0/(double)i;
  }
  return 4.0*m;
}
