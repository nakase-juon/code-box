#include <stdio.h>

int myatoi(char *);

int main()
{
  char str2[][20]={"  2020",
                   " -13.18",
                   "+32K",
                   " -987,654",
                   "+-56",
                   "x86",
                   "2021/02/28",
                   ""};
  int ival, i;

  for ( i=0; str2[i][0]!='\0'; i++ ){
    ival = myatoi( str2[i] );
    printf("string:%s\n", str2[i]);
    printf("value:%d\n", ival);
  }
  return 0;
}
/* この後に関数 myatoi を作成する */
int myatoi(char *x){
  int a=1;
  int ans=0;
  for(int i=0;x[i]!='\0';i++){
    if((x[i]>='!'&&x[i]<='*') || (x[i]==',') || (x[i]>='.'&&x[i]<='/') || (x[i]>=':'&&x[i]<='~') || (x[i]=='+'&&x[i+1]=='-') || (x[i]=='-'&&x[i+1]=='+')){
      return a*ans;
    }else if(x[i]==' '){
      i++;
    }else if(x[i]=='-'){
      a = -1;
      i++;
    }else if(x[i]=='+'){
      i++;
    }
    while(1){
      if(x[i]>='0'&&x[i]<='9'){
        ans=10*ans+(int)(x[i]-'0');
        i++;
      }else{
	break;
      }
    }
  }
  return a*ans;
}
