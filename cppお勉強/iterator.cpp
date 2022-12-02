#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // vector<int> a(3);
    // a = {25,7,100};
    // sort(a.begin(),a.end());
    // for(int i = 0; i < a.size(); i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    // range-based for
    // for(int x : a){
    //     cout<<x<<endl;
    // }

    // for(int &x : a){
    //     x++;
    //     cout<<x<<endl;
    // }

    // for( auto it = a.begin(); it != a.end(); it++){
    //     cout<<*it<<endl;
    // }

    int n;
    cin>>n;
    vector<int> a(n);
    for(int &A : a){
        cin>>A;
    }
}