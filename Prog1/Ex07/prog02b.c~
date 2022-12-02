#include <stdio.h>
#include "prog01.h"
#define YEAR 2020
#define MONTH 10
#define DAY 1

Record input(void);
void output(Record);
int getage(Record);

int main(){
  Record data[2];
  printf("-------データ入力-------\n");
  for(int i=0;i<2;i++){
      printf("%d人目の",i+1);
      data[i] = input();
      printf("\n");
  }

  printf("-------データ出力-------\n");
  printf("年齢基準日：2020年10月1日\n");
  for(int i=0;i<2;i++){
      printf("%d人目のデータ：\n",i+1);
      output(data[i]);
      printf("年齢：%d\n",getage(data[i]));
      if(i==0){
          printf("\n");
      }
  }
  return 0;
}

Record input(void){
    Record data;
    printf("データを入力して下さい\n");
    printf("名前(性) -> ");
    scanf("%s",&data.familyname);
    printf("名前(名) -> ");
    scanf("%s",&data.firstname);
    printf("生まれた年(西暦) -> ");                                     
    scanf("%d",&data.birthday[0]);
    printf("生まれた月 -> ");
    scanf("%d",&data.birthday[1]);
    printf("生まれた日 -> ");
    scanf("%d",&data.birthday[2]);
    printf("性別(0: 男性,1: 女性) -> ");
    scanf("%d",&data.gender);
    return data;
}

void output(Record x){
    printf("名前(性): %s\n",x.familyname);
    printf("名前(名): %s\n",x.firstname);
    printf("生年月日: %d年 %d月%d日",x.birthday[0],x.birthday[1],x.birthday[2]);
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
