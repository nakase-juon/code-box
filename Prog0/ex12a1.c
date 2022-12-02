#include <stdio.h>
void function(double, double);
    
int main()
{
  double a, b;
    
  printf("係数aとbの値を入力してください： ");
  scanf("%lf %lf", &a, &b);
  printf("関数の値は以下のとおりです。\n");
  function(a, b);
  /*for(int i=1;i<=4;i++){
    ans=a*i+b;
    printf("x = %d のとき y = %2.1f\n",i,ans);
    }*/
  return 0;
}

void function(double a, double b)
{
  /* 以下を埋める */
  /* ここから */
  double ans;
  for(int i=1;i<=4;i++){
    ans=a*i+b;
    printf("x = %d のとき y = %2.1f\n",i,ans);
  }
  /* ここまで */
}
