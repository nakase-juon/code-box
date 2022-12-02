    #include <stdio.h>
     
    int main(){
     
      int num = 987;
      int *p = &num;
     
      printf("(a) %d\n", num);
      printf("(b) %p\n", &num);
      printf("(c) %p\n", p);
      printf("(d) %d\n", *p);
      printf("(e) %p\n", &p);
      printf("(f) %d\n", *(&num));
      printf("(g) %p\n", *(&p)); 
      return 0;
    }
