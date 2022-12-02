#include <stdio.h>

int isprime(int);

int n;

int main() {
  int flg=0;
  for(int i=2;i<1001;i++){
    if(isprime(i)==1){
      printf("%6d",i);
      flg++;
      if(flg%10==0){
	printf("\n");
      }
    }
  }
  printf("\n");
  return 0;
}

int isprime(int x){
  for(int i=2;i<x;i++){
    if(x%i==0){
      return 0;
    }
  }
  return 1;
}
  
