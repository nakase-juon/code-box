#include <stdio.h>

int main() {
  int a,b,c;
  printf("サイズを入力してください( 小...1, 中...2, 大...3 )");
  scanf("%d",&a);
  printf("行き先を入力してください(福島県内...1, 宮城県...2, 山形県...3, 岩手県...4, 秋田県...5, 青森県...6 )");
  scanf("%d",&b);
  if(a==1){
    if(b==1){
      c=600;
    }else if(b==2 || b==3){
      c=800;
    }else if(b==4){
      c=1000;
    }else if(b==5){
      c=1200;
    }else if(b==6){
      c=1400;
    }
  }else if(a==2){
    if(b==1){
      c=800;
    }else if(b==2 || b==3){
      c=1000;
    }else if(b==4){
      c=1200;
    }else if(b==5){
      c=1400;
    }else if(b==6){
      c=1600;
    }
  }else if(a==3){
    if(b==1){
      c=1000;
    }else if(b==2 || b==3){
      c=1200;
    }else if(b==4){
      c=1400;
    }else if(b==5){
      c=1600;
    }else if(b==6){
      c=1800;
    }
  }
  printf("運賃は %d円です。\n",c);
  return 0;
}
    
