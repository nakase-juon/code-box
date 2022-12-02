#include <stdio.h>

int main() {
  int score=0,count=0,pass=0;
  double sum=0,ave=0;
  while(1){
    printf("得点を入力して下さい: ");
    scanf("%d",&score);
    count++;
    sum+=score;
    if(score>=50){
      pass++;
    }
    if(score<0){
      sum=sum-score;
      break;
    }
  }
  ave=sum/(count-1);
  printf("受験者数 %d 名, 平均点 %f 点\n",count-1,ave);
  printf("合格者数 %d 名, 不合格者数 %d 名\n",pass-1,count-pass-1);
  return 0;
}
  
