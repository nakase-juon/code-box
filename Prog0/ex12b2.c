#include <stdio.h>

void d2btransfunc(int);

int main(){
  int n;
  int bit[8]={};
  while(1){
    printf("2進数に変換したい10進数の数値を入力してください\n");
    scanf("%d",&n);
    if(n<0){
      break;
    }
    for(int i=0;i<8;i++){
      bit[7-i]=n%2;
      n /= 2;
    }
    for(int i=0;i<8;i++){
      printf("%d",bit[i]);
    }
    printf("\n");
  }
  return 0;
}
  
