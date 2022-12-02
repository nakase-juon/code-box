#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(void){
    long double a,b,h,m;
    long double n,l,o,ans;
    cin>>a>>b>>h>>m;
    n=h*30+m*0.5;
    l=m*6;
    o=(n-l)*3.14159265358979/180;
    if(o<0){
        o*=-1;
    }
    ans=a*a+b*b-2*a*b*cos(o);
    printf("%.30Lf",sqrt(ans));
}