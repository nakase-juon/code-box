#include <bits/stdc++.h>
using namespace std;

int fib(int);

int main(){
    vector<int> ans(50);
    ans[0]=0;
    ans[1]=1;
    /*for(int i=0;i<30;i++){
        if(i>1){
            ans[i]+=ans[i-1]+ans[i-2];
        }
        cout<<ans[i]<<endl;
    }*/
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}