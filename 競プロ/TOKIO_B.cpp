#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,v,w,t;
    cin>>a>>v>>b>>w>>t;
    long long int ans1,ans2;
    if(a<b){
        ans1=a+v*t;
        ans2=b+w*t;
        if(ans1>=ans2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        ans1=a-v*t;
        ans2=b-w*t;
        if(ans1<=ans2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}