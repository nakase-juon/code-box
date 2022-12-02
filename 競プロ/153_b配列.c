#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a,const void* b){
    return *(int*)a-*(int*)b;
}

int main(){
    int h,n,sum=0;
    scanf("%d%d",&h,&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    qsort(a,n,sizeof(int),cmp);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    if(sum>=h){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}