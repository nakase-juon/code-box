#include<stdio.h>

double SeqAvgStatic(double);

int main(){
  double data,result;
  int i=0;
  while(1){
    printf("データを入力してください: ");
    if(scanf("%lf",&data)==EOF){
      printf("\n");
      printf("最終的な平均値は%lfです。\n",result);
      break;
    }
    i++;
    result=SeqAvgStatic(data);
    printf("データの個数 = %d,ここまでの平均 = %lf\n",i,result);
  }
  return 0;
}

double SeqAvgStatic(double a){
  static double avg=0.0;
  static int cnt=0;
  cnt++;
  avg=(avg*(cnt-1)+a)/(double)cnt;
  return avg;
}
