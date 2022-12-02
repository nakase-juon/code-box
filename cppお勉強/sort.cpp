#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(void){
    int n;
    int tmp;
    cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=1;i+j<n;j++){
            if(s[i]>=s[i+j]){
                tmp=s[i];
                s[i]=s[i+j];
                s[i+j]=tmp;
            }
        } 
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<" "<<flush;
    }
}