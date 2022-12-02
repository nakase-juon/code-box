#include <stdio.h>

int kaijo(int);
int jun(int, int);

int main() {
  int n,r,ans;
  printf("2整数n,rを入力： ");
  scanf("%d %d",&n,&r);
  ans=jun(n,r);
  printf("異なる %d 個の中から %d 個取り出して並べる順列の総数は %d とおり\n",n,r,ans);
  return 0;
}

int kaijo(int a){
  int ans1=1;
  for(int i=a;i>0;i--){
    ans1=ans1*i;
      }
  return ans1;
}

int jun(int b, int c){
  int ans2;
  ans2=kaijo(b)/kaijo(b-c);
  return ans2;
}
  
