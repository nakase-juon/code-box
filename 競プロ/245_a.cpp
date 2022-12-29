#include <iostream>

using namespace std;

// struct Time(){
//     int hour;
//     int min;
//     int get_hour() const{
//         return hour;
//     }
//     int get_min() const{
//         return min;
//     }
// };

// struct Taka : public Time(){
// };

// struct Aoki : public Time(){
// };



int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < c)
    {
        cout << "Takahashi" << endl;
    }
    else if (a > c)
    {
        cout << "Aoki" << endl;
    }
    else
    {
        if (b > d)
        {
            cout << "Aoki" << endl;
        }
        else
        {
            cout << "Takahashi" << endl;
        }
    }
    return 0;
}