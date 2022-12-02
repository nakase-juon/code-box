#include <iostream>  //input,output(入出力)
#include <vector>  //多機能な配列を呼び出す
#include <algorithm>  //この世の真理
using namespace std;


int main(){
    vector<vector<int>> a(3);  //配列の枠だけ作って随時追加
    a[0].push_back(7);
    a[0].push_back(3);
    a[0].push_back(1);
    a[1].push_back(2);
    a[2].push_back(5);
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";

    vector<vector<int>> b(3, vector<int>(4, 10));  //配列を全て10で初期化
    for(int i = 0; i < b.size(); i++){
        for(int j = 0; j < b[i].size(); j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
}