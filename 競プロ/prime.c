#include <stdio.h>
#include <math.h>

int main(){
    int n,a[10000];
    int cnt = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=2;j<=(int)sqrt(a[i])+1;j++){
            if(a[i]==2){
                break;
            }
            if(a[i]%j==0){
                cnt++;
                break;
            }
        }
    }

    printf("%d\n",n-cnt);

    return 0;
}