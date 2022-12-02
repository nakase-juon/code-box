#include <iostream>
#include <math.h>

using namespace std;

// xのn乗
// long long powpow(long long x, long long n)
// {
//     if (n == 0)
//         return 1;
//     long long val = powpow(x, n / 2);
//     val *= val;
//     if (n % 2 == 1)
//         val *= x;
//     return val;
// }

int main()
{
    int n, m;
    cin >> n >> m;
    // long long x = 10;
    // for (int i = 1; i < n; i++)
    //     x *= 10;
    string x = "1";
    for(int i = 0; i < n; i++){
        x.append("0");
    }
    cout << x << endl;
    cout << to_string(atoi(x.c_str()) - 1) << endl;
    bool hasAns = false;
    bool isSame = true;
    string num;
    return 0;
    // cout << pow(10.0, (double)n) << " " << x << endl;
    // for (long long int i = x; i > 0; i--)
    // {
    //     if (i % m == 0)
    //     {
    //         isSame = true;
    //         num = to_string(i);
    //         if (num.length() > 1)
    //         {
    //             for (unsigned long long int j = num.length() - 1; j > 0; j--)
    //             {
    //                 if (num.at(j) != num.at(0))
    //                 {
    //                     isSame = false;
    //                     break;
    //                 }
    //                 if (isSame && j == 1)
    //                 {
    //                     x = i;
    //                     hasAns = true;
    //                     break;
    //                 }
    //             }
    //             if (hasAns)
    //                 break;
    //         }
    //         else
    //         {
    //             x = i;
    //             hasAns = true;
    //             break;
    //         }
    //     }
    // }

    // if (hasAns)
    //     cout << x << endl;
    // else
    //     cout << -1 << endl;

    // return 0;
}