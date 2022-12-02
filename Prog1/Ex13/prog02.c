#include <stdio.h>
#include <stdlib.h>

#define BLACK '1'
#define WHITE '0'

char **pbm_alloc(int, int);
void pbm_free(char **, int, int);
void pbm_write(char **, int, int);
char **pbm_read(int *, int *);
void pbm_square(char **, int, int, int, char);

int main(int argc, char *argv[]){
  char **pbm;
  int ix, iy, d;

  pbm = pbm_read(&ix, &iy);

  if (atof(argv[1]) < 0.0 || atof(argv[1]) > 1.0){
    exit(8);
  }
	if (ix>iy){
    d = (int)(iy * atof(argv[1]) /2);
  }else{
    d =  (int)(ix * atof(argv[1]) /2);
  }
	d--;

  #ifdef WSQUARE
  pbm_square(pbm, ix, iy, d, WHITE);
	#endif

	#ifdef BSQUARE
  pbm_square(pbm, ix, iy, d, BLACK);
	#endif

  pbm_write(pbm, ix, iy);
  pbm_free(pbm, ix, iy);

	return 0;
}

char **pbm_alloc(int x, int y) {
	char **data;

  data=(char **)malloc(y*sizeof(char *));

  for(int i=0;i<y;i++){
    data[i]=(char *)malloc(x*sizeof(char));
    if(data[i]==NULL){
      for(int j=0;j<i;j++){
        free(data[j]);
        free(data);
      }
      return NULL;
    }
  }
  return data;
}

void pbm_free(char **pbm, int x, int y){
  for(int i=0;i<y;i++){
    free(pbm[i]);
  }
  free(pbm);
}

void pbm_write(char **pbm, int x, int y){
  printf("P1\n");
  printf("%d %d\n",x,y);
  for(int i=0;i<y;i++){
    for(int j=0;j<x;j++){
      printf("%c ",pbm[i][j]);
    }
    printf("\n");
  }
}

char **pbm_read(int *x, int *y){
  int x_size,y_size,flg;
  char **data;

  if(getchar()!='P' || getchar()!='1'){
    return NULL;
  }
  scanf("%d",&x_size);
  scanf("%d",&y_size);
  data=pbm_alloc(x_size,y_size);

  for(int i=0;i<y_size;i++){
    for(int j=0;j<x_size;j++){
      flg=scanf("%c",&data[i][j]);
      if(flg!=1){
        pbm_free(data,x_size,y_size);
        return NULL;
      }
      if(data[i][j]!=WHITE &&data[i][j]!=BLACK){
        pbm_free(data,x_size,y_size);
        return NULL;
      }
    }
  }
  *x=x_size;
  *y=y_size;
  return data;
}

void pbm_square(char **pbm, int x, int y, int d, char col){
  int x_P,y_P;

  x_P=(x-d*2)/2;
  y_P=(y-d*2)/2;

  for(int i=y_P;i<y-y_P;i++){
    pbm[i][x_P]=col;
    pbm[i][x-x_P-1]=col;
  }
  for(int i=x_P;i<x-x_P;i++){
    pbm[y_P][i]=col;
    pbm[y-y_P-1][i]=col;
  }
}
