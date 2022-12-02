#include <stdio.h>
#include <math.h>

typedef struct {
  double  x; /* x座標 */
  double  y; /* y座標 */
} Point;

Point rotate_1(double, Point, Point);
void  rotate_2(double, Point, Point *);
Point rotate_3(double,Point *);
void  rotate_4(double,Point *);

int main(){
  double rad, deg;
  Point c = {1.0, 2.0}, a = {3.0, 3.0}; /* 中心と回転対象の点 */
  Point b1, b2, b3, b4[3];         /* 結果を入れる構造体 */
  Point box[2];
  box[0] = c;
  box[1] = a;
  b4[0] = c;
  b4[1] = a;
  
  printf("回転角度 [度] を入力してください\n");
  scanf("%lf", &deg);
  rad = deg*M_PI/180;
  printf("回転角 %f [deg] (%f [rad])\n", deg, rad);
  printf("Center  : %f %f\n", c.x, c.y);
  printf("Original: %f %f\n", a.x, a.y);
  
  /*
   * ここに関数呼び出しおよび関連するコードを書く
   */
  /*b1 = rotate_1(rad,c,a);
  rotate_2(rad,c,&a);
  b2 = a;
  printf("rotate_1 : %f %f\n", b1.x, b1.y);*/  /* 関数１の結果を出力 */
  /*printf("rotate_2 : %f %f\n", b2.x, b2.y);*/   /* 関数２の結果を出力 */

  b3 = rotate_3(rad, &box[0]);
  rotate_4(rad, &b4[0]);
  
  printf("rotate_3: %f %f\n", b3.x, b3.y);
  printf("rotate_4: %f %f\n", b4[2].x, b4[2].y);
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

Point rotate_3(double rad, Point *box){
  Point temp = {box[1].x - box[0].x, box[1].y - box[0].y};
  Point b3 = {
    box[0].x + temp.x * cos(rad) + temp.y * (-sin(rad)),
    box[0].y + temp.x * sin(rad) + temp.y * cos(rad)
  };
  return b3;
}

void rotate_4(double rad, Point *b4){
  Point temp = {b4[1].x - b4[0].x, b4[1].y - b4[0].y};
  b4[2].x = b4[0].x + temp.x * cos(rad) + temp.y * (-sin(rad));
  b4[2].y = b4[0].y + temp.x * sin(rad) + temp.y * cos(rad);
}
