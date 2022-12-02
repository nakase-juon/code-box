#include<stdio.h>

int main() {
  int n[10];
  int i;
  for(i=0;i<10;i++){
    scanf("%d",&n[i]);
    if(n[i]==-1){
      break;
    }
  }
  for(i=i-1;i>=0;i--){
    printf("%d ",n[i]);
  }
  printf("\n");
  return 0;
}
