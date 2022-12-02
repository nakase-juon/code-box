#include <stdio.h>
#define NUM 3

int main()
{
  int map[NUM][NUM];
  int i, j, m, n;
  int flag = 0, flg2=0,tate1=0,tate2=0,tate3=0,yoko1=0,yoko2=0,yoko3=0,nana1=0,nana2=0;

  /* 配列の初期化 */
  for (i=0; i<NUM; i++){
    for (j=0; j<NUM; j++){
      map[i][j] = 0;
    }
  }

  while (1) {
    
  /* 盤の表示 */
    for (i=0; i<NUM; i++){
      for (j=0; j<NUM; j++){
	nana1+=map[i][j];
      }
    }
    for (i=NUM; i>0; i--){
      for (j=0; j<NUM; j++){
	nana2+=map[i][j];
      }
    }

    if(tate1==3||tate2==3||tate3==3||yoko1==3||yoko2==3||yoko3==3||nana1==3||nana2==3){
      printf("0の勝ち!!\n");
      break;
    }else if(tate1==-3||tate2==-3||tate3==-3||yoko1==-3||yoko2==-3||yoko3==-3||nana1==-3||nana2==3){
      printf("1の勝ち!!\n");
      break;
    }else if(flg2==9){
      printf("引き分けです\n");
      break;
    }

    for (i=0; i<NUM; i++){
      for (j=0; j<NUM; j++){
        if (map[i][j]==1){
	  printf("(%d %d) O ", i, j);
	}else if (map[i][j]==-1){
	  printf("(%d %d) X ", i, j);
	}else{
	  printf("(%d %d)   ", i, j);
	}
      }
      printf("\n");
    }

    /* 座標の入力 */
    if (flag==0) {
      printf("Oの番です\n座標を行・列の順で入力してください：");
      scanf("%d%d", &m, &n);
      if(map[m][n]==0){
	map[m][n] = 1;
	flag = 1;
	flg2++;
	tate1++;
	tate2++;
	tate3++;
	yoko1++;
	yoko2++;
	yoko3++;
      }else{
	printf("そこには打てません\n");
      }
    } else {
      printf("Xの番です\n座標を行・列の順で入力してください：");
      scanf("%d%d", &m, &n);
      if(map[m][n]==0){
	map[m][n] = -1;
        flag = 0;
	flg2++;
	tate1--;
	tate2--;
	tate3--;
	yoko1--;
	yoko2--;
	yoko3--;
      }else{
	printf("そこには打てません\n");
      }
    }
  }
  return 0;
}
