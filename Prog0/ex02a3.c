#include <stdio.h>

int main()
{
  int a;
  
  printf("整数値を入力して下さい:");
  scanf("%d",&a);
  printf("入力された値は%dで、5で割った余りは%dです。\n",a,a%5);

  return 0;
}
