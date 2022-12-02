#include <stdio.h>

int main() {
  int a, b, c, res;

 printf("Input a, b, and c: ");
 scanf("%d%d%d", &a, &b, &c);
 printf("\n");

 res = a*b;
 printf("Compute a * b\n");
 printf("%d * %d = %d\n", a, b, res);

 printf("\n");

 printf("Compute (2 * a + b) %% c\n");
 /* printfで%を表示させたい場合は%%と書く */
 res = (2*a+b)%c;
 printf("(2 * %d + %d) %% %d = %d\n", a, b, c, res);

 return 0;
}
