#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,tmp;
    int ans=0;
    cin>>n>>k;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(p[i]<=p[j]){
                tmp=p[i];
                p[i]=p[j];
                p[j]=tmp;
            }
        }
    }
    for(int i=0;i<k;i++){
        ans+=p[i];
    }
    cout<<ans<<endl;
}