#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n;
    int min=100;
    cin>>x>>n;
    vector<int> p(n),a(100);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=1;i<101;i++){
        a.at(i-1)=i;
        for(int j=0;j<n;j++){
            if(a.at(i-1)==p.at(j)){
                a.at(i-1)=0;
            }
        }
    }
}