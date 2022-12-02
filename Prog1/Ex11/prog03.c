#include <stdio.h>
#include <math.h>

double myexp(double, int);
double divx(double, int);

int main(){
  double x;
  int n;
  double ex;

  /* キーボードからの入力と関数呼び出しを書く */
  printf("xの値を入力して下さい ");
  scanf("%lf",&x);
  printf("次数nを入力して下さい ");
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    myexp(x,i);
  }
  ex = myexp(x,n);

  printf("\nexp(%g, %d) =\t%20.15f\n", x, n, ex); /* 結果表示 */
  printf("exp(%g) =\t%20.15f\n", x, exp(x));      /* 数学関数 */

  return 0;
}

double myexp(double x, int n){
  double e;
  e = 0;

  for(int i=0;i<=n;i++){
    e += divx(x,i);
  }

  /* このprintfの上にコードを補い、関数を完成させる */
  printf("depth(%3d) : exp(%g) = %20.15f\n", n, x, e);
  return e;
}

double divx(double x ,int n){
  /* 関数を完成させよ */
  double ans1 = 1, ans2;
  for(int i=1;i<=n;i++){
    ans1 *= i;
  }
  ans2 = pow(x,n);
  return ans2/ans1;
}
