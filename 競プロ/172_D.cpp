#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a=0;
    cin>>n;
    vector<int> m(n);
    vector<int> p(n);
    for(int i=1;i<=n;i++){
        m[i-1]=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m[i-1];j++){
            if(m[i-1]%j==0){
                p[i-1]++;
            }
        }
        a+=m[i-1]*p[i-1];
    }
    cout<<a<<endl;
}