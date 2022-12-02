#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(void){
    int n,a;
    string s;
    cin>>n>>s;
    if(s.size()<=n){
        cout<<s<<endl;
    }else{
        a=s.size()-n;
        s.erase(s.size()-a);
        cout<<s<<"..."<<endl;
    }
}