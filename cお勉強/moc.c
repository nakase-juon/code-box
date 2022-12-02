#include <stdio.h>

int main(){
    for(int x=0;x<10;x++){
        if(x>=0&&x>5||x<3){
            printf("%d\n",x);
        }
    }
    return 0;
}