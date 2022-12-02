#include <stdio.h>
#define MAX 10000

int A[MAX][MAX];

void pre(int[MAX][MAX], int, int, int);
void Floyd(int);

int main()
{
    int cost, v;
    int i, j, k;

    printf("Input the number of vertex: ");
    scanf("%d", &v);

    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            if (i == j)
                A[i][j] = 0;
            else
                A[i][j] = MAX;
        }
    }

    // set vertex a to number 0
    // set vertex b to number 1
    // set vertex c to number 2
    // set vertex d to number 3
    // set vertex e to number 4
    // set vertex f to number 5
    // set vertex g to number 6
    // set vertex h to number 7
    pre(A, 0, 1, 48);
    pre(A, 0, 3, 8);
    pre(A, 0, 4, 20);
    pre(A, 0, 6, 20);
    pre(A, 1, 2, 24);
    pre(A, 1, 4, 9);
    pre(A, 1, 6, 76);
    pre(A, 1, 7, 29);
    pre(A, 2, 0, 97);
    pre(A, 2, 6, 18);
    pre(A, 2, 7, 1);
    pre(A, 3, 1, 52);
    pre(A, 3, 2, 34);
    pre(A, 3, 4, 29);
    pre(A, 4, 5, 10);
    pre(A, 5, 1, 10);
    pre(A, 5, 2, 85);
    pre(A, 5, 3, 43);
    pre(A, 5, 6, 41);
    pre(A, 5, 7, 29);
    pre(A, 6, 3, 76);
    pre(A, 6, 4, 38);
    pre(A, 7, 0, 28);
    pre(A, 7, 1, 42);
    pre(A, 7, 3, 77);
    pre(A, 7, 4, 21);
    pre(A, 7, 6, 11);

    Floyd(v);

    return 0;
}

void pre(int A[MAX][MAX], int a, int b, int w)
{
    A[a][b] = w;
}

void Floyd(int n)
{
    int i, j, k;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                if (A[i][j] > A[i][k] + A[k][j])
                    A[i][j] = A[i][k] + A[k][j];
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}
