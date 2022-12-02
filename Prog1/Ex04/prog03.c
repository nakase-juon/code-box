#include <stdio.h>
 
#define N 256 /* ??? にはバッファ配列に最大文字数の単語を適切に格納可能な数値を指定する */
 
int main(){
	char str[N], str_new[N];
	
	printf("Input : ");
	scanf("%s", str); /* 1単語を標準入力から入力 */
	
	/*
	 * 入力した単語を1文字ずつチェックし，
	 * 英数字（すなわち0-9, A-Z, a-z）ならそのまま str_new にコピー，
	 * それ以外なら str_new に'_'を代入する，
	 * さらに，str_new の末尾の処理が必要となる
	 */

	for(int i=0;i<N;i++){
	  if(str[i]=='\0'){
	    str_new[i]='\0';
	    break;
	  }
	  if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'||str[i]>='0'&&str[i]<='9'){
	    str_new[i]=str[i];
	  }else{
	    str_new[i]='_';
	  }
	}
	printf("Before : %s\n", str);
	printf("After  : %s\n", str_new);
	
	return 0;
}
