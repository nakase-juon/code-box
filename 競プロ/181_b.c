#include <stdio.h>

int main(){
    int n;
    long long int a,b;
    long long int total=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&a,&b);
        total+=(b-a+1)*(a+b)/2;
    }
    printf("%lld\n",total);
    return 0;
}