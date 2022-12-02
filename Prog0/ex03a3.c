#include <stdio.h>

int main() {
  int a = 6;
  int b = 4;
  double c1, c2, c3;
  c1 = a + b * a;
  c2 = a / b;
  c3 = (double)a / (double)b;
  printf("c1=%f,c2=%f,c3=%f\n",c1,c2,c3);
  return 0;
}
