#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char c_left = 'A';
    char c_right = 'A';
    if (n < 16)
    {
        c_left = '0';
    }
    if (n == 0)
    {
        c_right = '0';
    }
    if (n / 16 >= 10)
    {
        for (int i = n / 16 - 10; i > 0; i--)
        {
            c_left++;
        }
    }
    else
    {
        c_left = n / 16 + '0';
    }
    if (n % 16 >= 10)
    {
        for (int i = n % 16 - 10; i > 0; i--)
        {
            c_right++;
        }
    }
    else
    {
        c_right = n % 16 + '0';
    }
    cout << c_left << c_right << endl;

    return 0;
}