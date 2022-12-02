#include<stdio.h>

int main() {
  int data[10]={10,9,8,7,6,5,4,3,2,1};
  int a,i;
  for(i = 0; i < 10; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");
  for(i=0;i<5;i++){
	a=data[9-i];
        data[9-i]=data[i];
        data[i]=a;
  }
  for(i = 0; i < 10; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");
  return 0;
}
  
