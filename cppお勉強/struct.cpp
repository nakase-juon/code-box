#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student{
    //vector<int> age;
    //vector<vector<char>> name;
    int age;
    vector<char> name;

    //student(vector<int> A,vector<vector<char>> B):age(A),name(B) {}
    student(int a,vector<char> n):age(a),name(n){}
    
    void output(){
        cout<<age<<endl;
        for(int i = 0; i < name.size(); i++){
            cout<<name[i];
        }
        cout<<endl;
    }
};

// int main(){
//     vector<char> takashi = {'T','a','k','a','s','h','i'};
//     student aho({10,100,1000}, vector<vector<char>> (3,takashi));
//     for(int i = 0; i < aho.age.size(); i++){
//         cout<<aho.age[i]<<endl;
//         aho.name[i].push_back('0' + i);
//         for(int j = 0 ; j < aho.name[i].size(); j++){
//             cout<<aho.name[i][j];
//         }
//         cout<<endl;
//     }
// }

int main(){
    vector<char> takashi = {'T','a','k','a','s','h','i'};
    vector<student> ahos(3, student(10,takashi));

    for(int i = 0; i < ahos.size(); i++){
        ahos[i].age *= i*10;
        ahos[i].name.push_back('0' + i);
        ahos[i].output();
    }
}