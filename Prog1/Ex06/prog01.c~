#include <stdio.h>

double ave3(double, double, double);      /* プロトタイプ宣言 */
void sub3(double *, double *, double *, double);

int main()
{
  double a, b, c, ave;

  printf("3つ値を入力してください:\n");
  scanf("%lf%lf%lf", &a, &b, &c);

  ave = ave3( a, b, c);   /* 関数の呼び出し：結果は戻り値として受け取る */

  printf("平均:  %.3f\n", ave);
  printf("元のデータ:  %+.3f  %+.3f  %+.3f\n", a, b, c);

  sub3( &a, &b, &c, ave);   /* 関数の呼び出し */

  printf("平均差し引き後のデータ:  %+.3f  %+.3f  %+.3f\n", a, b, c);
  return 0;
}

/* ３つの引数の平均を計算し、戻り値にして返す関数。 */
double ave3(double x, double y, double z)
{
  /* ここを適宜作成 */
  return (x+y+z)/3;
}

/* 平均を引き算する関数。第４引数の値を第１・第２・第３引数から引き算する。 */
void sub3(double *x, double *y, double *z, double ave)
{
  /* ここを適宜作成 */
  *x-=ave;
  *y-=ave;
  *z-=ave;
}
