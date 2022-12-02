#include<iostream>
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
    cin>>n;
    vector<string> a(n);
    int b=n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            b--;
        }
    }
    cout<<b<<endl;
}