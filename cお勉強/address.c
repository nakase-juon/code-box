#include <stdio.h>
/*
void Swap(int*, int*);

int main()
{
    int a = 10;
    int b = 5;
    int *c = &a;
    int *d = &b;
    Swap(&a, &b);
    printf("a=%d b=%d\n", *c, *d);
    return 0;
}

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
*/
int main()
{
    int a[5];
    a[0] = 10;
    a[1] = 15;
    printf("%d\n", *(a+1));
    return 0;
}