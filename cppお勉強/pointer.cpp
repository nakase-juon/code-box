#include <iostream>
#include <vector>
using namespace std;

// void my_swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){
//     int b = 15;
//     int *a = &b;
//     cout<<*a<<" "<<a<<endl;
//     *a = 10101010;
//     cout<<b<<endl;

//     int c = 10;
//     my_swap(&b,&c);
//     cout<<b<<' '<<c<<endl;
// }


void my_swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}