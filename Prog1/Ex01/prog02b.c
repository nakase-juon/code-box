#include<stdio.h>

#define TRUE 1
#define FALSE 0

int isAlpha(char);
int isUpper(char);

int main(){
  char c;
  printf("Input any characters: ");
  while(1){
    scanf("%c",&c);
    if(c=='\n'){
      break;
    }
    printf("ASCII code of a character '%c' is %d(0x%x).",c,c,c);
    if(isAlpha(c)==TRUE){
      if(isUpper(c)==TRUE){
        printf("It's a upper-case character.\n");
      }else{
	printf("It's a lower-case character.\n");
      }
    }else{
      printf("It's a non-alphabetic character.\n");
    }
  }
  return 0;
}

int isAlpha(char c){
  if(c>=65&&c<=90||c>=97&&c<=122){
    return TRUE;
  }else{
    return FALSE;
  }
}

int isUpper(char c){
  if(c>=65&&c<=90){
    return TRUE;
  }else{
    return FALSE;
  }
}
