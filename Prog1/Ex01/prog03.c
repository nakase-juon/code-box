#include<stdio.h>

char grade_char(int);
int char_point(char);

int main(){
  int score,unit,total1=0,total2=0,mul;
  double ave;
  while(1){
    printf("評定と単位数を入力してください (Ctrl+Dで終了): ");
    if(scanf("%d %d",&score,&unit)==EOF){
      printf("\n");
      ave=(double)total1/(double)total2;
      printf("Grade Point Average (GPA): %.3lf, 単位数: %d\n",ave,total2);
      break;
    }
    mul=char_point(score)*unit;
    total1+=mul;
    total2+=unit;
    printf("%d 点の評価は %c で,Grade Point (GP) は %d です. (%d 単位)\n",score,grade_char(score),char_point(score),unit);
  }
  return 0;
}

char grade_char(int score){
  if(score>=80&&score<=100){
    return 'A';
  }else if(score>=65&&score<=79){
    return 'B';
  }else if(score>=50&&score<=64){
    return 'C';
  }else if(score>=35&&score<=49){
    return 'D';
  }else if(score>=0&&score<=34){
    return 'F';
  }
}

int char_point(char c){
  if(c>=80&&c<=100){
    return 4;
  }else if(c>=65&&c<=79){
    return 3;
  }else if(c>=50&&c<=64){
    return 2;
  }else if(c>=0&&c<=49){
    return 0;
  }
}
