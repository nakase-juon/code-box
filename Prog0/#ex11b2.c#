#include <stdio.h>

int gcd(int, int);

int main(){
  int x,y,ans;
  while(1){
    printf("Input two numbers\n");
    scanf("%d %d",&x,&y);
    if(x<0 || y<0){
      printf("Input positive numbers again!\n");
    }else if(x==0 || y==0){
      break;
    }else{
      ans = gcd(x, y);
      printf("GCD of %d and %d is %d.\n",x,y,ans);
    }
  }
  return 0;
}

int gcd(int x, int y){
  int z;
  z=x%y;
  while(1){
    x=y;
    y=z;
    z=x%y;
    if(z==0){
      z+=y;
      break;
    }
  }
  return z;
}
