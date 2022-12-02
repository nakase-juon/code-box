#include <stdio.h>

int main() {
    int a[6]={130,120,200,80,150,110};
    int b[6]={3,5,10,4,8,6};
    int c[6]={0};
    int d[5]={0};
    int e[5]={0};
    int sen,goh,hya,goj,juu,hajime,n,sum=0,turi,mai=0;

    while(1){
        for(int i=0;i<6;i++){
            if(b[i]>0){
                printf("%d(O)%4d円\n",i+1,a[i]);
            }else{
                printf("%d(X)%4d円\n",i+1,a[i]);
            }
        }
        printf("お金と飲み物番号を入力してください\n");
        if(scanf("%d %d %d %d %d %d",&sen,&goh,&hya,&goj,&juu,&n)==EOF){
            break;
        }
        hajime=1000*sen+500*goh+100*hya+50*goj+10*juu;
        printf("\n");
        printf("--状態表示エリア--\n");
        if(b[n-1]==0){
            printf("飲み物%dは売り切れです\n",n);
            printf("お金%d円が戻ります\n",hajime);
            printf("\n");
        }else{
            if(hajime>=a[n-1]){
                b[n-1]--;
                c[n-1]++;
                sum+=a[n-1];
                turi=hajime-a[n-1];
                d[0]+=sen;
                d[1]+=goh;
                d[2]+=hya;
                d[3]+=goj;
                d[4]+=juu;
                printf("飲み物%dが出ます\n",n);
                printf("お釣り\n");
                if(turi/500!=0){
                    printf("500円%d枚 ",turi/500);
                    e[1]+=turi/500;
                    turi%=500;
                }
                if(turi/100!=0){
                    printf("100円%d枚 ",turi/100-turi/500);
                    e[2]+=turi/100;
                    turi%=100;
                }
                if(turi/50!=0){
                    printf("50円%d枚 ",turi/50-turi/100-turi/500);
                    e[3]+=turi/50;
                    turi%=50;
                }
                if(turi/10!=0){
                    printf("10円%d枚 ",turi/10-turi/50-turi/100-turi/500);
                    e[4]+=turi/10;
                }
                printf("が出ます\n");
            }else{
                printf("投入金額が足りません\n");
                printf("お金%d円が戻ります\n",hajime);
            }
            printf("\n");
        }
    }
    printf("\n");
    printf("--売上サマリ--\n");
    printf("売れた飲み物の番号毎の本数\n");
    for(int i=0;i<6;i++){
        printf("%d:%2d本\n",i+1,c[i]);
    }
    printf("\n");
    printf("総売上額%5d円\n",sum);
    printf("\n");
    printf("各金種毎の収納枚数・お釣り使用枚数\n");
    printf("1000円: 収納%2d  釣り%2d\n",d[0],e[0]);
    printf(" 500円: 収納%2d  釣り%2d\n",d[1],e[1]);
    printf(" 100円: 収納%2d  釣り%2d\n",d[2],e[2]);
    printf("  50円: 収納%2d  釣り%2d\n",d[3],e[3]);
    printf("  10円: 収納%2d  釣り%2d\n",d[4],e[4]);
    return 0;
}
