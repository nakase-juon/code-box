#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    int j = 0;
    int cnt = 0;
    cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cin>>q;
    vector<int> t(q);
    for(int i=0;i<q;i++){
        cin>>t[i];
    }
    int lef = 0;
    int rig = n;
    while(j!=q){
        int mid = (lef+rig)/2;
        if(t[j]>=s[mid]){
            if(lef==mid){
                j++;
                lef = 0;
                rig = n;
            }
            lef = mid;
        }else if{
            rig = mid;
        }else if(t[j]==s[mid]){
            cnt++;
            lef = 0;
            rig = n;
            mid = (lef+rig)/2;
            j++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}