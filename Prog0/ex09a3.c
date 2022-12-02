#include <stdio.h>

#define HOGE 3

int main() {
  int n,gyoretsu[HOGE][HOGE];
  printf("3 x 3行列を整数値で入力してください\n");
  for(int i=0;i<HOGE;i++){
    for(int j=0;j<HOGE;j++){
      scanf("%d",&gyoretsu[i][j]);
    }
  }
  printf("行列を何倍にしますか？ ");
  scanf("%d",&n);
  for(int i=0;i<HOGE;i++){
    for(int j=0;j<HOGE;j++){
      printf("%2d ",gyoretsu[i][j] * n);
    }
    printf("\n");
  }
  return 0;
}
