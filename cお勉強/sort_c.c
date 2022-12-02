#include<stdio.h>
#include<stdlib.h>

int sort(const void*a,const void*b){
    if(*(int*)a < *(int*)b){
        return -1;
    }else if(*(int*)a == *(int*)b){
        return 0;
    }
    return 1;
}

int main(){
    int data_cnt,i;
    int data[5];

    data_cnt = sizeof(data)/sizeof(data[0]);

    for(i=0;i<data_cnt;i++){
        data[i]= data_cnt-i;
    }
}