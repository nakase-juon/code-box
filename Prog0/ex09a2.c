#include <stdio.h>
 
#define NMAX 3

int main()
{
  int i, j, mat[NMAX][NMAX]={{1,2,3},{4,5,6},{7,8,9}};
  
  for (i=0; i<NMAX; i++){
    for (j=0; j<NMAX; j++){
      printf(" %d", mat[i][j]);
    }
    printf("\n");
  }

  printf("対角要素の二乗\n");
  for (i=0; i<3; i++){
    printf(" %d", mat[i][i]*mat[i][i]);
  }
  printf("\n");

  return 0;
}
