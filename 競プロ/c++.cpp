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
    int a[100000];
    int b=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(b<a[i]){
            b=a[i];
        }
    }
    cout<<b<<endl;
}