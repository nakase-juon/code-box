#include <stdio.h>

int main()
{
  double x = 31.4;
  int i = 29;

  printf("認定単位数は%05dです\n", i);
  printf("認定単位数は%5dです\n", i);
  printf("認定単位数は%-5dです\n", i);
  printf("認定単位数は%+5dです\n", i);
  printf("総合点数は%-5.3f点です\n", x);
  printf("総合点数は%-7.6e点です\n", x);
  printf("総合点数は%-4.3E点です\n", x);

  return 0;  
}
