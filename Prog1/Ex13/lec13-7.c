#include <stdio.h>
#include <stdlib.h>

#define BLACK '1'
#define WHITE '0'

char **input_data(int *, int *);
void output_data(char**, int, int);
void invert_data(char**, int, int);
void fliplr_data(char**, int, int);
void outputrl_data(char**, int, int);

char *odata;

int main()
{
  char** img_data;
  int  i, x_size, y_size;

  /* 繝��繧ｿ隱ｭ縺ｿ霎ｼ縺ｿ  */
  img_data = input_data(&x_size, &y_size);

  /* 繝槭け繝ｭ縺ｫ繧医ｋ髢｢謨ｰ繧ｳ繝ｼ繝ｫ */
  #ifdef INV
    invert_data(img_data, x_size, y_size);
  #endif
  #ifdef FLIPLR
    fliplr_data(img_data, x_size, y_size);
  #endif
  #ifdef ROTL
    outputrl_data(img_data, x_size, y_size);
  #else
    output_data(img_data, x_size, y_size);
  #endif

  free(img_data);
  free(odata);

  return 0;
}

char **input_data(int *x_sizep, int *y_sizep){ /* 繝��繧ｿ蜈･蜉 */

  int i, j, x_size, y_size;
  char **data;

  /* 譛蛻昴↓P1縺ｨ譖ｸ縺�※縺�↑縺�ｂ縺ｮ縺ｯ繝��繧ｿ蠖｢蠑上′驕輔≧ */
  if (getchar() != 'P' || getchar() != '1'){
    fprintf(stderr, "繝��繧ｿ縺ｮ蠖｢蠑上′驕輔＞縺ｾ縺兔n");
    exit(1);
  }

  /* x,y縺昴ｌ縺槭ｌ縺ｮ逕ｻ邏謨ｰ繧貞ｾ励ｋ */
  scanf("%d", &x_size);
  scanf("%d", &y_size);

  /* �呈ｬ｡蜈��蛻励�菴懈� */
  data = malloc(sizeof(char *) * y_size);
  odata = malloc(sizeof(char) * x_size * y_size);
  /* 逕ｻ邏謨ｰ縺悟､壹☆縺弱ｋ蝣ｴ蜷 */
  if (odata == NULL){
    fprintf(stderr, "繝��繧ｿ縺悟､ｧ縺阪☆縺弱∪縺兔n");
    free(data);
    exit(2);
  }
  /* �呈ｬ｡蜈��蛻励�險ｭ螳 */
  for(i = 0; i < y_size; i++){
    data[i] = odata + i * x_size;
  }

  /* 螳滄圀縺ｮ繝��繧ｿ蜈･蜉 */
  for (i = 0; i < y_size; i++){
    for (j = 0; j < x_size; j++){
      /* scanf蜈･蜉帙ョ繝ｼ繧ｿ縺後♀縺九＠縺�°�･�ｯ�ｦ縺ｫ縺ｪ縺｣縺溷ｴ蜷             */
      /* 縺薙�髫帙" %c"縺ｨ縺吶ｋ縺薙→縺ｧ遨ｺ逋ｽ縲∵隼陦後√ち繝悶↑縺ｩ縺ｯ隱ｭ縺ｿ鬟帙�縺 */
      if(scanf(" %c", &data[i][j]) != 1){
	       exit(3);
      }
      /* 繝��繧ｿ縺鯉ｼ撰ｼ擾ｼ代§繧�↑縺�ｴ蜷 */
      if(data[i][j] != WHITE && data[i][j] != BLACK){
	      fprintf(stderr, "繝��繧ｿ縺檎焚蟶ｸ縺ｧ縺励◆\n");
	      exit(4);
      }
    }
  }

  /* 繧ｵ繧､繧ｺ縺ｮ險ｭ螳 */
  *x_sizep = x_size;
  *y_sizep = y_size;

  return data;
}

void output_data(char **data, int x_size, int y_size){ /* 繝��繧ｿ蜃ｺ蜉 */

  int i, j;

  /* 譛蛻昴↓P1縺ｨx,y縺ｮ逕ｻ邏謨ｰ繧貞�蜉 */
  printf("P1\n");
  printf("%d %d\n", x_size, y_size);

  /* 螳滄圀縺ｮ繝��繧ｿ蜃ｺ蜉 */
  for (i = 0; i < y_size; i++){
    for (j = 0; j < x_size; j++){
      printf("%c", data[i][j]);
    }
    printf("\n");
  }
}

void invert_data(char **data, int x_size, int y_size){ /* 逋ｽ鮟貞渚霆｢ */

  int i, j;

  for (i = 0; i < y_size; i++){
    for (j = 0; j < x_size; j++){
      data[i][j] = data[i][j] == BLACK ? WHITE : BLACK;
    }
  }
}

void fliplr_data(char **data, int x_size, int y_size){ /* 蟾ｦ蜿ｳ蜿崎ｻ｢ */

  int i, j, x2;
  char c;

  x2 = x_size/2;

  for (i = 0; i < y_size; i++){
    for (j = 0; j < x2; j++){
      c = data[i][j];
      data[i][j] = data[i][x_size - j  - 1];
      data[i][x_size - j  - 1] = c;
    }
  }
}

void outputrl_data(char **data, int x_size, int y_size){ /* 蟾ｦ�呻ｼ仙ｺｦ蝗櫁ｻ｢ */

  int i, j;

  /* 譛蛻昴↓P1縺ｨx,y縺ｮ逕ｻ邏謨ｰ繧貞�蜉(蜈･繧梧鋤縺) */
  printf("P1\n");
  printf("%d %d\n", y_size, x_size);

  /* 螳滄圀縺ｮ繝��繧ｿ蜃ｺ蜉 */
  for (i = 0; i < x_size; i++){
    for (j = 0; j < y_size; j++){
      /* 蝗櫁ｻ｢縺ｮ蜃ｦ逅 */
      printf("%c",data[j][x_size - i - 1]);
    }
    printf("\n");
  }
}
