#include <stdio.h>

int main(){
  double x = 0.5, y = 3.5;
    	
  double *p, *q;
     
  p = &x;
  q = &y;
  
  printf("Value x: %f (%p)\n", *p, p);
  printf("Value y: %f (%p)\n", *q, q);
  printf("Product: %f\n", *p * *q);
  printf("Quotient: %f\n", *p / *q);
  return 0;
}
