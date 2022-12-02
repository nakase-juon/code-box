#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int cnt = 0;
    int sum = 0;
    cin>>n;
    for(int i=1; i<500000000; i++){
        cnt++;
        sum+=i;
        if(sum>=n){
            cout<<cnt<<endl;
            break;
        }
    }
}