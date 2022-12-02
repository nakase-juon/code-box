#include <stdio.h>

#define G  9.80     /* 重力加速度 */
#define VISC 1.8e-5 /* 空気の粘性係数 */

int main (){
  double v, x, t=0.0, tmax, a, m, c_m;
  double dt=0.00001;     /* タイムステップの値（十分小さくとること） */
  double dtp;
  double pi = 3.14159265358979; /* 円周率 */
  /* 必要な変数宣言を追加すること */


  printf("初期状態の速度、位置と、計算する時間を入力してください\n");
  scanf( "%lg%lg%lg", &v, &x, &tmax );
  printf("物体の半径と質量を入力してください\n");
  scanf( "%lg%lg", &a, &m );

  printf("出力の間隔を入力してください: ");
  scanf("%lg", &dtp);
  if (dtp < dt){
    dtp = dt; /* おかしな入力は修正 */
  }
  

