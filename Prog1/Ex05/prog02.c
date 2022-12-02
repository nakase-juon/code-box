#include <stdio.h>
#include <string.h>

int main()
{
  int i, len;
  int istart, iend;
  char str1[] = "to Advance Knowledge for Humanity";
  char *p, *q;
  
  len = strlen(str1);
  printf("Input start and end positions (1 - %d, start <= end): ", len);
  scanf("%d%d", &istart, &iend);

  /* 通常の配列添字を使い、配列要素を順次参照する方法 */
  for(i = istart-1; i <= iend-1; i++) {
    printf("%c", str1[i]);
  }
  printf("\n");
  
  /* 参照するアドレスをポインタ演算で計算する方法。pは固定。 */
  p = str1;
  for(i = istart-1; i <= iend-1 ; i++) {
    printf("%c", *(p + i));
  }
  printf("\n");

  /* ポインタ変数に格納されているアドレスそのものを変えていく方法 */
  for(q = p + istart - 1; q <= p + iend - 1; q++) {
    printf("%c", *q);
  }
  printf("\n");
  return 0;
}
