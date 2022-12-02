#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class student{
public:  //private,protectedもあるよ
    int age;
    vector<char> name;

    student(int a,vector<char> n):age(a),name(n){}
    
    void output(){
        cout<<age<<endl;
        for(int i = 0; i < name.size(); i++){
            cout<<name[i];
        }
        cout<<endl;
    }
};

//継承の仕方
// class student2 : student {

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