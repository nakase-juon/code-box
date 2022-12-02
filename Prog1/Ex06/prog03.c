#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, i, elem;
  double dfirst, dlast, x;
  double *array1, *array2;

  /* 最初の値、最後の値、分割する数を入力 */
  printf("Input first, last, total number of x[]: ");
  scanf("%lf%lf%d", &dfirst, &dlast, &num);

  /* これ以降を作成すること */
  
  /* メモリ確保 */
  array1 = (double *)malloc(num * sizeof(double));
  array2 = (double *)malloc(num * sizeof(double));
 /* 格納する値の決定。
    端の値のぶんを考慮して分割数を決める事と、整数除算しないように注意 */
  x = (dlast - dfirst) / ((double)num-1);
  array1[0] = dfirst;
  for(i=1; i<num; i++){
    array1[i] = array1[i-1] + x;
  }
  for(i=0; i<num; i++){
    array2[i] = array1[i] * array1[i];
  }
  /* 結果の表示 */
  printf("Values of x\n");
  for(i=0; i<num; i++){
    printf("%.3f ",array1[i]);
  }
  printf("\n");
  printf("Values of x^2\n");
  for(i=0; i<num; i++){
    printf("%.3f ",array2[i]);
  }
  printf("\n");
  /* 後処理 */
  free(array1);
  free(array2);
  return 0;
}
