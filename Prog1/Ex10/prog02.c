#include<stdio.h>
#include<stdlib.h>

int myatoi(char *);

int main(){
  char s1[10],s2[10];
  int n,m;
  int j=1;
  printf("和暦（H30,R等）:　");
  scanf("%s",s1);
  if(s1[1]>'A'&&s1[1]<'Z'){
    printf("数字を読み取れません\n");
    exit (2);
  }else{
    for(int i=0;i<5;i++){
      if(s1[j]=='\0'){
	break;
      }else{
	s2[i]=s1[j];
	j++;
      }
    }
    n = myatoi(s2);
    if(s1[0]=='R'){
      m=2019;
    }else if(s1[0]=='H'){
      m=1989;
    }else if(s1[0]=='S'){
      m=1926;
    }else if(s1[0]=='T'){
      m=1912;
    }else if(s1[0]=='M'){
      m=1868;
    }
  }
  
  printf("%d\n",n);
  printf("西暦(A.D.): %d\n",m+n-1);
  return 0;
}

int myatoi(char *x){
  int i=0;
  int a=1;
  int ans=0;
  for(int j=0;x[j]!='\0';j++){
   if(x[i]==' '){
     i++;
    }
  }
   if(x[i]=='-'){
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
  return a*ans;
}
