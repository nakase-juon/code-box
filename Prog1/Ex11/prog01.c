#include <stdio.h>
#include <math.h>

typedef struct {
  double  x; /* x座標 */
  double  y; /* y座標 */
} Point;

Point rotate_1(double, Point, Point);
void  rotate_2(double, Point, Point *);

int main()
{
  double rad, deg;
  Point c = {1.0, 2.0}, a = {3.0, 3.0}; /* 中心と回転対象の点 */
  Point b1, b2;         /* 結果を入れる構造体 */

  printf("回転角度 [度] を入力してください\n");
  scanf("%lf", &deg);
  rad = deg*M_PI/180;
  printf("回転角 %f [deg] (%f [rad])\n", deg, rad);
  printf("Center  : %f %f\n", c.x, c.y);
  printf("Original: %f %f\n", a.x, a.y);
  
  /*
   * ここに関数呼び出しおよび関連するコードを書く
   */
  b1 = rotate_1(rad,c,a);
  rotate_2(rad,c,&a);
  b2 = a;
  printf("rotate_1 : %f %f\n", b1.x, b1.y);   /* 関数１の結果を出力 */
  printf("rotate_2 : %f %f\n", b2.x, b2.y);   /* 関数２の結果を出力 */
  return 0;
}

/*
 * ここにプロトタイプに合わせた rotate_1関数の中身を書く
 */
Point rotate_1(double rad, Point c, Point a){
  Point temp;
  temp.x = c.x + (a.x - c.x) * cos(rad) + (a.y - c.y) * (-sin(rad));
  temp.y = c.y + (a.x - c.x) * sin(rad) + (a.y - c.y) * cos(rad);
  return temp;
}
/*
 * ここにプロトタイプに合わせた rotate_2関数の中身を書く
 */
void rotate_2(double rad, Point c, Point *a){
  Point temp;
  temp = *a;
  a->x = c.x + (temp.x - c.x) * cos(rad) + (temp.y - c.y) * (-sin(rad));
  a->y = c.y + (temp.x - c.x) * sin(rad) + (temp.y - c.y) * cos(rad);
}
