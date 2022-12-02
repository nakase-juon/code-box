#include <stdio.h>

int main() {
  int m,n;
  printf("整数 m, n を入力してください：");
  scanf("%d %d",&m,&n);
  printf("%dを%dでわった余りは%dです。\n",m,n,m-((m/n)*n));
  return 0;
}
