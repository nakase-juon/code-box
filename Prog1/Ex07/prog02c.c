#include <stdio.h>
#include "prog01.h"
#define YEAR 2020
#define MONTH 10
#define DAY 1
#define N 20

Record input(void);
void output(Record);
int getage(Record);

int main(){
  Record data[N];
  int count=0;
  for(int i=0;i<N;i++){
      data[i] = input();  
      if(data[i].gender == -1){
          break;
      }
      count++;
  }

  printf("-------データ出力-------\n");
  printf("年齢基準日：2020年10月1日\n");
  for(int i=0;i<count;i++){
      printf("%d人目, ",i+1);
      output(data[i]);
  }
      
  return 0;
}

Record input(void){
    Record data;
    scanf("%s",&data.familyname);
    scanf("%s",&data.firstname);                                 
    scanf("%d",&data.birthday[0]);
    scanf("%d",&data.birthday[1]);
    scanf("%d",&data.birthday[2]);
    if(scanf("%d",&data.gender) == EOF){
      data.gender = -1;
    }
    return data;
}

void output(Record x){
    printf("氏名: %s",x.familyname);
    printf("  %s  ,",x.firstname);
    printf(" %d年%2d月%d日,",x.birthday[0],x.birthday[1],x.birthday[2]);
    printf(" 年齢:%d ",getage(x));
    if(x.gender==0){
        printf("(男性)\n");
    }else{
        printf("(女性)\n");
    }
}

int getage(Record x){
    int age;
    age=YEAR-x.birthday[0];
    if(MONTH<x.birthday[1]){
        age--;
    }else if(MONTH==x.birthday[1] && DAY!=x.birthday[2]){
        age--;
    }
    return age;
}
