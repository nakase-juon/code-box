/* 修正点をコメントでここに箇条書きで記述 
・prototypeをintに変換し引数の型をintで宣言
・仮引数の型のintを削除
・仮引数の型をintで宣言
・2倍していたのを削除しm以下にする
・returnで戻す
*/
  
#include <stdio.h>
int kisuu_no_wa(int);
  
int main() {
  int n;
  printf("nを入力： ");
  scanf("%d", &n);
  printf("1から %d までの奇数の和： %d\n", n, kisuu_no_wa(n));
  
  return 0;
}
  
int kisuu_no_wa(int m) {
  int i, s=0;
  for(i=1; i<=m; i+=2){
    s+=i;
  }
  return s;
}
