#include<stdio.h>

typedef struct{
	int  id;       /* ID */
	char name[20]; /* 名前 */
	int score;     /* 点数 */
	char grade;    /* 成績 */
}Record;

void PrintData1(Record);
void PrintData2(Record *);

int main(){
    Record data[2] = {
        {1280035,"Nakase Juon",80,'A'},
        {1280164,"Kurou Yuhi",75,'B'}
    };

    printf("値渡し\n");
    PrintData1(data[0]);
    PrintData1(data[1]);

    printf("ポインタ(アドレス)渡し\n");
    PrintData2(&data[0]);
    PrintData2(&data[1]);

    return 0;
}

void PrintData1(Record x){
    printf("%d\t%s %d %c\n",x.id,x.name,x.score,x.grade);
}

void PrintData2(Record *x){
    printf("%d\t%s %d %c\n",x->id,x->name,x->score,x->grade);
}
