#include <stdio.h>

int main() {
  double bottom,height,area;
  printf("三角形の底辺の長さと高さをcmで入力してください：");
  scanf("%lf %lf",&bottom,&height);
  area = bottom*height/2.0;
  printf("三角形の面積は%f平方cmです\n",area);
  return 0;
}
