#include <stdio.h>

int main() {
  
  int n,s = 0, s2;
  printf("nを入力して下さい：");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++){
    s += i * i;
    printf("%d",i * i);
    if(i == n){
      break;
    }
    printf("+");
  }
  s2 = (n * (n + 1) * (2 * n + 1)) / 6;
  printf(" = %dです\n",s);
  printf("公式による結果は%dです\n",s2);
  return 0;
}
