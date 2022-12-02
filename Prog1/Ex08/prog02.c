#include <stdio.h>
#include <math.h>

typedef struct{
  double x;
  double y;
}XY;

typedef struct{
  XY center;
  XY p;
}CIRCLE;

CIRCLE input1(void);   /* データを読み込んだ構造体を戻す */
void input2(CIRCLE *); /* 構造体のポインタを渡し、そこにデータを読み込む */

int main(){
  CIRCLE ans;
  CIRCLE q;
  double r,l,a;
  printf("データの入力（構造体を返す関数）：\n");
  ans = input1();
  r=sqrt((ans.p.x-ans.center.x)*(ans.p.x-ans.center.x)+(ans.p.y-ans.center.y)*(ans.p.y-ans.center.y));
  l=2*r*M_PI;
  a=r*r*M_PI;
  printf("input1: radius, length, area : %f, %f, %f\n",r,l,a);
  
  printf("データの入力（構造体ポインタを使う関数）：\n");
  input2(&q);
  r=sqrt(((&q)->p.x-(&q)->center.x)*((&q)->p.x-(&q)->center.x)+((&q)->p.y-(&q)->center.y)*((&q)->p.y-(&q)->center.y));
  l=2*r*M_PI;
  a=r*r*M_PI;
  printf("input2: radius, length, area : %f, %f, %f\n",r,l,a);
  return 0;
}

CIRCLE input1(){
  CIRCLE ans;
  scanf("%lf %lf %lf %lf",&ans.center.x,&ans.center.y,&ans.p.x,&ans.p.y);
  return ans;
}

void input2(CIRCLE *q){
  scanf("%lf %lf %lf %lf",&(*q).center.x,&(*q).center.y,&(*q).p.x,&(*q).p.y);
}
