#include <bits/stdc++.h>
using namespace std;

int main(void){
    int h1,h2,m1,m2,k;
    cin>>h1>>m1>>h2>>m2>>k;
    h1*=60;
    h2*=60;
    cout<<(h2+m2)-(h1+m1)-k<<endl;

}