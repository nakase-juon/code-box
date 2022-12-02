#include<stdio.h>
#define N 20

typedef struct{
	int  id;       /* ID */
	char name[20]; /* 名前 */
	int score;     /* 点数 */
	char grade;    /* 成績 */
}Record;

void PrintData1(Record);
void PrintData2(Record *);
int InputData(Record *);

int main(){
    Record data[N];
    int flg=0;
    for(int i=0;i<N;i++){
        if(InputData(&data[i]) == EOF){
            break;
        }
        flg++;
    }

    printf("値渡し\n");
    for(int i=0;i<flg;i++){
        PrintData1(data[i]);
    }

    printf("ポインタ(アドレス)渡し\n");
    for(int i=0;i<flg;i++){
        PrintData2(&data[i]);
    }
    
    return 0;
}

void PrintData1(Record x){
    printf("%d\t%s %d %c\n",x.id,x.name,x.score,x.grade);
}

void PrintData2(Record *x){
    printf("%d\t%s %d %c\n",x->id,x->name,x->score,x->grade);
}

int InputData(Record *x){
    return scanf("%d\t%s %d %c",&x->id,x->name,&x->score,&x->grade);
}
