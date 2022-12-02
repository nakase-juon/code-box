/*****************************************
 * lec12-1a.c
 *
 * ニュートン法による二乗根の計算
 *
 * オリジナル版（代入と比較を一気に行う）
 *
 *****************************************/
#include <stdio.h>
#define EPS 1.0e-6

double f(double, double);
double df(double);

int main()
{
  double a, x, fx, dfx;
  printf("input a number:");
  scanf("%lf",&a);
  x = a;
  printf("x\t\tfx\t\tdfx\n");
  while((fx = f(x,a)) > EPS ){
    dfx = df(x);
    x = x - fx/dfx;
    printf("%f\t%f\t%f\n",x,fx,dfx);
  }
  printf("ans(%f) = %f\n",a,x);
  return 0;
}

double f(double x, double a)
{
  double fx;
  fx = x*x - a;
  return fx;
}

double df(double x)
{
  double dfx;
  dfx = 2.0*x;
  return dfx;
}
