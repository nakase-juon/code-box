#include<stdio.h>

#define GYO 3
#define RET 4

int main() {
  int grt1[GYO][RET],grt2[GYO+1][RET+1];
  for(int i=0;i<GYO;i++){
    for(int j=0;j<RET;j++){
      scanf("%d",&grt1[i][j]);
      grt2[i][j]=grt1[i][j];
      grt2[GYO][RET]+=grt1[i][j];
    }
  }
  printf("\n");
  printf("Data and average:\n");
  for(int i=0;i<GYO+1;i++){
    for(int j=0;j<RET+1;j++){
      for(int k=0;k<GYO;k++){
        for(int l=0;j<RET;l++){
          grt2[i][RET]+=grt1[k][l];
          grt2[GYO][j]+=grt1[k][l];
        }
      }
    }
  }
  for(int i=0;i<GYO+1;i++){
    for(int j=0;j<RET+1;j++){
      (double)grt2[GYO][j]/=(double)GYO;
    }
    (double)grt2[i][RET]/=(double)RET;
  }
  (double)grt2[GYO][RET]/=12.0;
  for(int i=0;i<GYO+1;i++){
    for(int j=0;j<RET+1;j++){
      printf("%5d",(double)grt2[i][j]);
    }
    printf("\n");
  }
  return 0;
}
