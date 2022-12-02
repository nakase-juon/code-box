#include<stdio.h>

int main() {
  int n;
  printf("1から9までの整数を入力してください：");
  scanf("%d",&n);
  if(n<=0 || n>=10){
    printf("入力する数は1から9までです\n");
  }else{
    for(int i=1;i<=n;i++){
      for(int j=0;j<i;j++){
        printf("%d",i);
      }
      printf("\n");
    }
    for(int i=n-1;i>0;i--){
      for(int j=0;j<i;j++){
	printf("%d",i);
      }
      printf("\n");
    }
  }
  return 0;
}
    
