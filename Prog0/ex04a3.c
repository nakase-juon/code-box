#include <stdio.h>

int main() { 
 int a;
 printf("整数を入力してください ");
 scanf("%d", &a);
 /* 以下を埋める */
 /* ここから */
 if(a%2==0){
   printf("%dは偶数です\n",a);
 }else{
   printf("%dは奇数です\n",a);
 }
 /* ここまで */
 return 0;   
}
