#include<stdio.h>
#include<math.h>

int main(){
    long long int n;
    long double a;
    scanf("%lld",&n);
    a=sqrt(n);
    for(long long int i=1; i<=(int)a+1; i++){
        if(n%i==0){
            printf("%lld\n",i);
        }
    }
    for(long long int i=(int)a-1; i>=1; i--){
        if(n%i==0){
            printf("%lld\n",n/i);
        }
    }
    return 0;
}