#include <stdio.h>

int main() {
  int a,b;
  while(1){ 
    printf("出席番号を入力して下さい> ");
    scanf("%d",&a);
    b = a % 3;
    if(a==1){
      printf("この人は赤組です\n");
    }else if(a==2){
      printf("この人は白組です\n");
    }else if(a==0){
      printf("プログラムを終了します\n");
      break;
    }else{
      switch (b) {
      case 1:
        printf("この人は赤組です\n");
        break;
      case 2:
        printf("この人は白組です\n");
        break;
      case 0:
        printf("この人は青組です\n");
        break;
      default:
        printf("プログラムを終了します\n");
      }
      if(a<=0){
        break;
      }
    }
  }
  return 0;
}
