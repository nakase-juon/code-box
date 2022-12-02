#include <stdio.h>

int main() {
  int input;
  int count=0;

  while(count==2){
    printf("偶数は%d回入力されています。正の整数を入力して下さい ",count);
    scanf("%d",&input);
    if(input%2==0){
      count++;
    }
  }
  printf("偶数が2回入力されました。プログラムを終了します\n");
  return 0;
}
