#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(b%2!=0){
        cout<<"No"<<endl;
        return 0;
    }
    if(a==1){
        if(a*2==b||a*4==b){
            cout<<"Yes"<<endl;
            return 0;
        }else{
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(b%4==0){
        b=b/4;
        a-=b;
        if(a==0){
            cout<<"Yes"<<endl;
        }else if(b%a==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }else{
        if(b%a==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}