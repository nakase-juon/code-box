#include <stdio.h>

int main() {
  int a,b,c,ans1,ans2;
  printf("Enter a1 d n -> ");
  scanf("%d %d %d",&a,&b,&c);
  ans1=a+b*(c-1);
  ans2=c*(a+ans1)/2;
  printf("an = %d\n",ans1);
  printf("Sn = %d\n",ans2);

  return 0;
}
