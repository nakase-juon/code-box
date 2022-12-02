#include <stdio.h>

int main(){
    int a,b,c,d;
    int flg;
    int sum = 0;
    printf("4つの数字と足し算、引き算、掛け算、割り算を使って10を作ってみよう！\n");
    printf("下の4パターンのうちやりたいやつを数字で選んでね！\n");
    printf("1: a + b - c * d\n");
    printf("2: a / b * c - d\n");
    printf("3: a * b + c / d\n");
    printf("4: a - b / c + d\n");
    while(1){
        scanf("%d",&flg);
        if(1<=flg && flg<=4){
            break;
        }else{
            printf("1から4までの数字を選んでね。\n");
        }
    }
    printf("%dのパターンだね！じゃあ数字を入れて10を作れるか考えてみよう！\n",flg);
    printf("入力例:1 2 3 4←みたいに数字と数字の間には空白を入れてね。\n");
    while(1){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a == b || a == c || a == d || b == c || b == d|| c == d){
            printf("同じ数字が含まれているよ!もう一度入力し直そう！\n");
        }else{
            break;
        }
    }
    if(flg == 1){
        sum = a+b-c*d;
        printf("計算結果は%dになったよ!",sum);
        if(sum == 10){
            printf("お見事！\n");
            return 0;
        }else{
            printf("残念...またトライしてみよう！\n");
            return 0;
        }
    }else if(flg == 2){
        sum = a/b*c-d;
        printf("計算結果は%dになったよ!",sum);
        if(sum == 10){
            printf("お見事！10になったみたい！\n");
            return 0;
        }else{
            printf("残念...またトライしてみよう！\n");
            return 0;
        }
    }else if(flg == 3){
        sum = a*b+c/d;
        printf("計算結果は%dになったよ!",sum);
        if(sum == 10){
            printf("お見事！10になったみたい！\n");
            return 0;
        }else{
            printf("残念...またトライしてみよう！\n");
            return 0;
        }
    }else if(flg == 4){
        sum = a-b/c+d;
        printf("計算結果は%dになったよ!",sum);
        if(sum == 10){
            printf("お見事！10になったみたい！\n");
            return 0;
        }else{
            printf("残念...またトライしてみよう！\n");
            return 0;
        }
    }
    return 0;
}
