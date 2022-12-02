#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(void){
    string a,b;
    cin>>a>>b;
    b.erase(b.size()-1);
    if(a==b){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}