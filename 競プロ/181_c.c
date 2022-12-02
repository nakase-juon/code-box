#include <stdio.h>

int main(){
    int n;
    int x[100],y[100],flg=0;
    double ans1,ans2,ans3,ans4,ans5,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    for(int i=1;i<n;i++){
        for(int j=2;j<n;j++){
            if((x[0]==x[i]&&x[i]==x[j]&&x[0]==x[j]) || (y[0]==y[i]&&y[i]==y[j]&&y[0]==y[j])){
                flg++;
                if(flg-2>0){
                    printf("Yes\n");
                    return 0;
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        ans3=x[0]-x[i];
        ans4=y[0]-y[i];
        a=ans4/ans3;
        b=(double)y[i]-(double)x[i]*a;
        /*  ans5はy[j]  */
        //  ans5=a*x[i]+b;  //
        for(int j=1;j<n;j++){
            if((double)y[j]==a*(double)x[j]+b){
                flg++;
            }   
        }
    }
    if(flg!=0){
        printf("Yes%d\n",flg);
    }else{
        printf("No\n");
    }
    return 0;
}