#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)

double average(double data[], int n) {
    double total, average;
    total = 0.0;
    for (int i = 0; i < n; i++) {
        total += data[i];
    }

    average = total / n;
    return average;
}

int main() {

    int i = 0, j;
    double x[10][5], a[5], b[10], temp[10];

    FILE*fp1, *fp2;
    printf("読込み元ファイル : data1.txt \n");
    if ((fp1 = fopen("data1.txt", "r")) == NULL){
        printf("\n 【 File1 not opened 】\n"); 
        exit(1);
    }

    if ((fp2 = fopen("kekka.txt", "w")) == NULL) {
        printf("\n 【 File2 not opened 】 \n"); 
        exit(1);
    }
    while ((fscanf(fp1, "%lf %lf %lf %lf %lf", &x[i][0], &x[i][1], &x[i][2], &x[i][3], &x[i][4])) != EOF)
    {
        i++;
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            fprintf(fp2, "%9d ", (int)x[i][j]);
            a[j] = x[i][j];
        }
        fprintf(fp2, "%lf\n", average(a, j)); 
        temp[i] = average(a,j);
    }
    for (j = 0; j < 5; j++){
        for (i = 0; i < 10; i++)
        {
            b[i] = x[i][j];
        }
        fprintf(fp2, "%lf ", average(b, i));
    }

    fprintf(fp2,"%lf\n",average(temp,10));

    fclose(fp1);
    fclose(fp2);
}