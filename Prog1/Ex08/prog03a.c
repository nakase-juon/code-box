#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20000

typedef struct{
  	int data[N]; /* N個の要素を持つ配列 */
	int max;     /* データの最大値 */
	int min;     /* データの最小値 */
	double ave;  /* データの平均値 */
}My_Array;

void FindMember1(My_Array *);

int main(){
  My_Array A;
  srand((unsigned int)time(NULL));
  for(int i=0;i<N;i++){
    A.data[i] = rand() % 1000;
  }
  FindMember1(&A);
  printf("Maximum value: %d\n",A.max);
  printf("Minimum value: %d\n",A.min);
  printf("Average value: %f\n",A.ave);
  return 0;
}

void FindMember1(My_Array *a){
  double ave=0;
  a->max = a->data[0];
  a->min = a->data[N-1];
   for(int i=1;i<N;i++){
     if(a->max<a->data[i]){
       a->max=a->data[i];
    }if(a->min>a->data[i]){
       a->min=a->data[i];
     }
  }
   for(int i=0;i<N;i++){
     ave+=a->data[i];
   }
   ave/=N;
   a->ave=ave;
}
