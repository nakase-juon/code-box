#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    int a=0;
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        if(s.at(i)!=t.at(i)){
            a++;
        }
    }
    cout<<a<<endl;
}