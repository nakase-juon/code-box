#include<stdio.h>

int main() {
  int Fibonacci[21];
  double goldenratio=1.6180339887;
  Fibonacci[0]=0;
  Fibonacci[1]=1;
  for(int i=2;i<21;i++){
    Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
  }
  for(int i=0;i<21;i++){
    printf("Fibonacci[%d] = %d\n",i,Fibonacci[i]);
  }
  printf("\n");
  for(int i=1;i<20;i++){
    printf("Fibonacchi[%d]/Fibonacci[%d] - goldenratio = %6.3e\n",i+1,i,(double)Fibonacci[i+1]/(double)Fibonacci[i]-goldenratio);
  }
  return 0;
}
