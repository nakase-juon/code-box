#include<stdio.h>

int main() {
  int n1,n2,grt[4][5]={{1,2,3,4,5},{7,8,9,10,11},{12,13,14,15,16},{17,18,19,20,21}};
  printf("行要素と列要素のどちらかを表示したいか選択して下さい\n");
  printf("(行要素:0, 列要素:1)  ");
  scanf("%d",&n1);
  if(n1==0){
    printf("表示したい行番号を入力してください :");
    scanf("%d",&n2);
    for(int i=0;i<5;i++){
      printf("%2d ",grt[n2][i]);
    }
    printf("\n");
  }else if(n1==1){
    printf("表示したい行番号を入力してください :");
    scanf("%d",&n2);
    for(int i=0;i<4;i++){
      printf("%2d\n",grt[i][n2]);
    }
  }else{
    for(int i=0;i<4;i++){
      for(int j=0;j<5;j++){
	printf("%2d ",grt[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}
