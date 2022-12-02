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
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    cout<<a[n-1]<<endl;
}