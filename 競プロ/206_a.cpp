#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    double n;
    cin>>n;
    if(n*1.08<206){
        cout<<"Yay!"<<endl;
    }else if(n*1.08>=206&&n*1.08<207){
        cout<<"so-so"<<endl;
    }else{
        cout<<":("<<endl;
    }
}