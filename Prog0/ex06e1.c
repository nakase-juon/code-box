#include<stdio.h>

int main() {
  int n,m=0,ans=0;
  for(int i=1;i<=5;i++){
    printf("%d個目の整数を入力してください：",i);
    scanf("%d",&n);
    if(n<0){
      printf("入力された整数が0以下なのでスキップします\n");
    }else if(n==0){
      printf("入力された整数が0なのでスキップします\n");
    }else if(n==1){
      printf("入力された整数が1なのでスキップします\n");
    }else{
      for(int j=2;j<n;j++){
	if(n%j!=0){
	  m++;
	}
      }
      if(m==n-2){
        printf("%dは素数\n",n);
        ans++;
      }
      m=0;
    }
  }
  printf("素数は%d個ありました\n",ans);
  return 0;
}
