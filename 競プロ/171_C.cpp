#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<long long int> a(1000000000000001);
    a[0]='a';
    for(long long int j=0;j<1000000000000001;j++){
        a[j]='a'+1;
        if(a.at(a.size()-1)=='z'){
            a.at(a.size())=a.at(a.size()-1)+'a';
        }
    }
}