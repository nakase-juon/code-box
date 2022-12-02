#include <stdio.h>
#define INDI 3
#define INDJ 4

int main()
{
  int a[INDI][INDJ] = {
    { 1,  8, 11,  3},
    { 9,  5,  0,  7},
    { 5, 10,  4,  6},
  };
  int n,cnt1=0,cnt2=0;
  
  /* 必要に応じて変数宣言を追加 */

  printf("数値を入力してください: ");
  scanf("%d", &n);
  for(int i=0;i<INDI;i++){
    for(int j=0;j<INDJ;j++){
      cnt1++;
      if(cnt1>=12&&cnt2==0){
	printf("2次元配列 a の要素に %d はありません\n",n);
	break;
      }
      if(n==a[i][j]){
	cnt2++;
	printf("a[%d][%d] が %d です\n",i,j,n);
      }
    }
  }
  if(cnt2>0){
    printf("2次元配列 a の要素に %d は %d 個ありました\n",n,cnt2);
  }
  return 0;
}
