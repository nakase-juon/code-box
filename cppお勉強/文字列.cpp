#include <bits/stdc++.h>
using namespace std;

int main(void){
    string str="Hello";
    cout<<str.size()<<endl;
}
// 文字列変数.size()で文字の長さが出力される

int main(void){
    string str="hello";
    cout<<str.at(0)<<endl; //h
    cout<<str.at(4)<<endl; //o
}
// 文字列変数.at(x)でx番目の文字が出力される(添字は0から始まることに注意)

int main(void){
    string str="Hello";
    char c=str.at(0);
    cout<<c<<endl;
}
// 文字列のある一文字を取り出したいときはchar型

int main(void){
    string str="Hello";
    str.at(0)='M';
    cout<<str<<endl;
}
// 文字列のある一文字を変換

int main(void){
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str.at(i)==0){
            count++;
        }
    }
    cout<<count<<endl;
}
// 文字列に0が何個含まれているかを数える

int main(){
    string hello="Hello";
    // +演算子のやり方
    cout<<hello+",world!"<<endl;
    // +=演算子のやり方
    hello+=",Atcoder!";
    cout<<hello<<endl;
}
