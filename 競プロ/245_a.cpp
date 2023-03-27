#include <iostream>

using namespace std;

struct Time
{
    int min;
    int hour;
    int get_hour() const
    {
        return hour;
    }
    int get_min() const
    {
        return min;
    }
};

void check(Time t, Time a)
{
    if (t.get_hour() < a.get_hour())
    {
        cout << "Takahashi" << endl;
    }
    else if (t.get_hour() > a.get_hour())
    {
        cout << "Aoki" << endl;
    }
    else
    {
        if (t.get_min() > a.get_min())
        {
            cout << "Aoki" << endl;
        }
        else
        {
            cout << "Takahashi" << endl;
        }
    }
}

int main()
{
    Time t_time;
    Time a_time;

    cin >> t_time.hour >> t_time.min >> a_time.hour >> a_time.min;

    check(t_time, a_time);
    return 0;
}

