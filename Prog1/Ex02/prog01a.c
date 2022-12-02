#include<stdio.h>

double avg;
int cnt;

void SeqAvgExt(double);

int main(){
  double data;
  while(1){
    printf("データを入力してください: ");
    if(scanf("%lf",&data)==EOF){
      printf("\n");
      printf("最終的な平均値は%lfです。\n",avg);
      break;
    }
    SeqAvgExt(data);
    printf("データの個数 = %d,ここまでの平均 = %lf\n",cnt,avg);
  }
  return 0;
}

void SeqAvgExt(double a){
  cnt++;
  avg=(avg*(cnt-1)+a)/(double)cnt;
}
