#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int ans=0,cnt=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // for(int i=0;i<a.size()/2;i++){
    //     for(int j=i+1;j<(a.size()/2)+1;j++){
    //         if(a[i]!=a[j]){
    //             cnt++;
    //         }
    //     }
    // }
    // for(int i=(a.size()/2)+1;i<a.size()-1;i++){
    //     for(int j=i+1;j<a.size();j++){
    //         if(a[i]!=a[j]){
    //             cnt++;
    //         }
    //     }
    // }
    // for(int i=0;i<a.size()/2+1;i++){
    //     for(int j=(a.size()/2)+1;j<a.size();j++){
    //         if(a[i]!=a[j]){
    //             cnt++;
    //         }
    //     }
    // }
    cout<<cnt<<endl;
}