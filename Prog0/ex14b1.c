#include <stdio.h>
#define MAX 50

void bmi_hantei(void);
double  height[MAX],weight[MAX];

int main() {
  printf("身長(cm)と体重(kg)を、空白で区切って人数分入力してください。\n");
  for(int i=0;i<MAX;i++){
    scanf("%lf %lf",&height[i],&weight[i]);
  }
  printf("\n");
  printf("\tBMI\t状態\n");
  bmi_hantei();
  return 0;
}

void bmi_hantei(void){
  int flg1=0,flg2=0,flg3=0,flg4=0,flg5=0,flg6=0,flg7=0;
  double ans1,ans2,ans3,ans4,ans5,ans6;
  for(int i=0;i<MAX;i++){
    if(height[i]==0.0){
      break;
    }
    flg7++;
    double bmi=weight[i]/((height[i]/100)*(height[i]/100));
    printf("%2d人目 %.1f\t",i+1,bmi);
    if(bmi<18.5){
      printf("やせている\n");
      flg1++;
    }else if(bmi>=18.5&&bmi<25){
      printf("正常\n");
      flg2++;
    }else if(bmi>=25&&bmi<30){
      printf("肥満(1度)\n");
      flg3++;
    }else if(bmi>=30&&bmi<35){
      printf("肥満(2度)\n");
      flg4++;
    }else if(bmi>=35&&bmi<40){
      printf("肥満(3度)\n");
      flg5++;
    }else if(bmi>=40){
      printf("肥満(4度)\n");
      flg6++;
    }
  }
  printf("\n");
  ans1=100.0*((double)flg1/(double)flg7);
  ans2=100.0*((double)flg2/(double)flg7);
  ans3=100.0*((double)flg3/(double)flg7);
  ans4=100.0*((double)flg4/(double)flg7);
  ans5=100.0*((double)flg5/(double)flg7);
  ans6=100.0*((double)flg6/(double)flg7);
  if(ans1-(int)ans1>=0.50){
    ans1++;
  }
  if(ans2-(int)ans2>=0.50){
    ans2++;
  }
  if(ans3-(int)ans3>=0.50){
    ans3++;
  }
  if(ans4-(int)ans4>=0.50){
    ans4++;
  }
  if(ans5-(int)ans5>=0.50){
    ans5++;
  }
  if(ans6-(int)ans6>=0.50){
    ans6++;
  }
  printf("やせている%3d %%\n",(int)ans1);
  printf("正常\t    %3d %%\n",(int)ans2);
  printf("肥満(1度) %3d %%\n",(int)ans3);
  printf("肥満(2度) %3d %%\n",(int)ans4);
  printf("肥満(3度) %3d %%\n",(int)ans5);
  printf("肥満(4度) %3d %%\n",(int)ans6);
}
