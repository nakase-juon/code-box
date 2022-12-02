#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(void){
    long long int a,b,c,d;
    long long int e,f;
    cin>>a>>b>>c>>d;
    if(a>=d){
        cout<<d<<endl;
        return 0;
    }else{
        f=a;
        d-=a;
    }
    if(b>=d){
        cout<<f<<endl;
        return 0;
    }else{
        d-=b;
    }
    f-=d;
    cout<<f<<endl;
}