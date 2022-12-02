#include <stdio.h>

int main(){
    int a,b,flg=0;
    scanf("%d %d",&a,&b);
    while(1){
        a-=b;
        flg++;
        if(a<=0){
            printf("%d\n",flg);
            break;
        }
    }
    return 0;
}