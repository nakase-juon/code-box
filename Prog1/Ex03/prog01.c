    #include <stdio.h>
    #include <stdlib.h>

    #define TRUE 1
    #define False 0

    int isUpper(char);
    int isLower(char);
    int Change(char);

    int main(){
    	char in_filename[] = "data01.in"; /* 文字配列の初期化は Lec04-14,15 参照 */
    	char out_filename[] = "data01.out";
    	FILE *fpin, *fpout;
	int flg=0;
    	char c;
	char a[1000];
    	
    	/* 
    	 * 読み込み専用でファイル data01.in を開く．
    	 * ファイルオープンに失敗した場合はエラーを表示して終了する．
    	 */
    	if((fpin = fopen(in_filename, "r")) == NULL){
    		printf("Failed to open: %s\n", in_filename);
    		exit(1);
    	}
    	
    	/*
    	 * 書き込み専用でファイル data01.out を開く．
    	 * ファイルオープンに失敗した場合はエラーを表示して終了する．
    	 * その際，上で開いた入力ファイルを忘れずに閉じる．
    	 */
    	if((fpout = fopen(out_filename, "w")) == NULL){
    		printf("Failed to open: %s\n", out_filename);
    		fclose(fpin);
    		exit(2);
    	}
    	
    	/*
    	 * fpin を介して入力ファイルから，1文字ずつ読み込み，
    	 * そのまま fpout を介して出力ファイルに書き込む
    	 * 入力ファイルを最後まで読み込んだら，ループを抜ける．
    	 */
	for(int i=0; i<1000; i++){
	  c = fscanf(fpin,"%c",&a[i]);
	  if(c == EOF){
	    break;
	  }
	  flg++;
	}

	for(int i=0; i<flg; i++){
	  fprintf(fpout,"%c",isUpper(a[i]));
	}
	fprintf(fpout,"\n\n");
	
	for(int i=0; i<flg; i++){
	  fprintf(fpout,"%c",isLower(a[i]));
	}
        fprintf(fpout,"\n\n");
	
	for(int i=0; i<flg; i++){
	  fprintf(fpout,"%c",Change(a[i]));
	}
     
    	/* 開いた入出力ファイルをそれぞれ忘れずに閉じる． */
    	fclose(fpout);
    	fclose(fpin);
    	
    	/* 正常終了を表す値0を返して終了する． */
    	return 0;
    }

int isUpper(char c){
  if(c>=65&&c<=90){
    return c+32;
  }else{
    return c;
  }
}

int isLower(char c){
  if(c>=97&&c<=122){
    return c-32;
  }else{
    return c;
  }
}

int Change(char c){
  if(c>=65&&c<=90){
    return c+32;
  }else if(c>=97&&c<=122){
    return c-32;
  }else{
    return c;
  }
}
