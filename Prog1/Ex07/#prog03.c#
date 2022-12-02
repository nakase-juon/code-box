#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SUBJECT_NUM 4 /* 科目数 */
#define N 20

typedef struct{
	char id[8];             /* 学籍番号 */
	char name[10];          /* 氏名 */
	int score[SUBJECT_NUM]; /* 各点数 */
	int sum;                /* 合計点 */
	double ave;             /* 平均 */
	char grade;             /* 判定 */
}Record;

char grade_char(Record);
void output(Record);

int main(int argc, char *argv[]){
    FILE *fp;
    Record data[N];
    int i,n,count=0;
    char input[10];
    if(argc<=1){
      fprintf(stderr,"Error!  Usage: ./a.out datafilename\n",argv[0]);
        exit(1);
    }

    if((fp=fopen(argv[1],"r")) == NULL){
        fprintf(stderr,"Cannot open data file!\n");
        exit(2);
    }

    for(i=0;i<N;i++){
        if(fscanf(fp,"%s %s",data[i].id,data[i].name) == EOF){
            break;
        }
        data[i].ave=0.0;
        for(n=0;n<SUBJECT_NUM;n++){
            fscanf(fp,"%d",&data[i].score[n]);
            data[i].ave+=data[i].score[n];
        }
        data[i].sum=data[i].ave;
        data[i].ave/=SUBJECT_NUM;
        data[i].grade=grade_char(data[i]);
        output(data[i]);
    }

    while(1){
        printf("Input a student name/ID:");
        if(scanf("%s",input)!=1){
            break;
        }
        if(('A'<=input[0]&&input[0]<='Z') || ('a'<=input[0]&&input[0]<='z')){
              for (n=0;n<i;n++){
                  if(strcmp(data[n].name,input) == 0){
                      break;
                  }
              }
	}else if('0'<=input[0]&&input[0]<='9'){
	  for(n=0;n<i;n++){
	    if(strcmp(data[n].id,input) == 0){
	      break;
	    }
	  }
	}else{
	    n = i;	  
         }  
         if(n == i){
             printf("This student does not exist!\n");
         }else{
            output( data[n] );
         }
         printf("\n");
         return 0;
    }
}

char grade_char(Record x){
  if(x.ave>=80&&x.ave<=100){
    return 'A';
  }else if(x.ave>=65&&x.ave<=79){
    return 'B';
  }else if(x.ave>=50&&x.ave<=64){
    return 'C';
  }else if(x.ave>=35&&x.ave<=49){
    return 'D';
  }else if(x.ave>=0&&x.ave<=34){
    return 'F';
  }
}

void output(Record x){
    int i;  
    printf("%-10s", x.id);  
    printf("%-10s", x.name);  
    for (i=0; i<N; i++){    
        printf("%4d ", x.score[i]);  
    }  
    printf("%4d", x.sum);  
    printf("%6.1f   ", x.ave);  
    printf("%c\n", x.grade);
}
