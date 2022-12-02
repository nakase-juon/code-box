#include <stdio.h>
#define STEPS 1000 
  
int main(void)
{
 int i;
 float x; 
  
 /* Case 1 */
 printf("\n ===整数型iでループ=============== \n");
 for(i=0; i<=STEPS; i++) {
  x = i/(double)STEPS;
  if(x>.99) printf("%.7f \t %.7f \n", x, 1.0/STEPS );
 }
   
 /* Case 2 */
 printf("\n ===浮動小数点型xでループ=============== \n");
 for(x=0.0; x<=1.0 ; x+=1.0/STEPS){
   if(x>.99) printf("%.7f \t %.7f \n", x, 1.0/STEPS );
 }
  
 return 0;
}
