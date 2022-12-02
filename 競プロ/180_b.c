#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, man = 0, yuk = 0, che;
    scanf("%lld", &n);
    long long int x[100000];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &x[i]);
        if (x[i] < 0)
        {
            x[i] *= -1;
        }
        if (i > 0)
        {
            if (che <= x[i])
            {
                che = x[i];
            }
        }
        else
        {
            che = x[0];
        }
        man += x[i];
        yuk += x[i] * x[i];
    }
    printf("%lld\n%.15Lf\n%lld\n", man, sqrtl(yuk), che);
    return 0;
}