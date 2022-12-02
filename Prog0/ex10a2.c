#include<stdio.h>

#define SUB 9
#define STU 20
int main() {
  int a,b;
  scanf("%d %d",&a,&b);
  int c[STU][SUB];
  double d[SUB]={0.0};
  double sum=0.0;
  printf("科目数:%d, 学生数:%d\n",a,b);
  for(int i=0;i<b;i++){
    for(int j=0;j<a;j++){
      scanf("%d",&c[i][j]);
      d[j]+=c[i][j];
      sum+=c[i][j];
      printf("%-6d",c[i][j]);
    }
    printf(":% 4.1lf\n",sum/(double)a);
    sum=0.0;
  }
  for(int i=0;i<a;i++){
    printf("%3.1f  ",d[i]/(double)b);
  }
  printf("\n");
  return 0;
}
  
