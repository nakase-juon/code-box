#include <stdio.h>

int main() {
  double h1,h2,h3,h4,h5,ave;
  printf("5人分の身長[cm]を空白で分けて入力してください\n");
  scanf("%lf %lf %lf %lf %lf",&h1,&h2,&h3,&h4,&h5);
  ave = (h1+h2+h3+h4+h5)/5;
  printf("5人の身長の平均値:%.1f[cm]\n",ave);
  printf("1人目の身長:%.1f[cm],平均からの偏差:%+4.1f[cm]\n",h1,h1-ave);
  printf("2人目の身長:%.1f[cm],平均からの偏差:%+4.1f[cm]\n",h2,h2-ave);
  printf("3人目の身長:%.1f[cm],平均からの偏差:%+4.1f[cm]\n",h3,h3-ave);
  printf("4人目の身長:%.1f[cm],平均からの偏差:%+4.1f[cm]\n",h4,h4-ave);
  printf("5人目の身長:%.1f[cm],平均からの偏差:%+4.1f[cm]\n",h5,h5-ave);
  return 0;
}
