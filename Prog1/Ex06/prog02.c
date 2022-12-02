#include<stdio.h>
#include<stdlib.h>

char grade_char(int);

int main(int argc,char *argv[]){
  int elem;
  for(int i=1; i<argc; i++){
    elem=atoi(argv[i]);
    printf("Score:%d Grade:%c\n",elem,grade_char(elem));
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
