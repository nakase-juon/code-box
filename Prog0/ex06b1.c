#include <stdio.h>

int main() {
  int n;
  printf("整数を入力してください：");
  scanf("%d",&n);
  for(int i=1;i<=n;i+=3){
    printf("%d\n",i);
  }
  return 0;
}
