#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TATE 5

int main()
{
  int i;
  char *arr[TATE],buffer[100];

  for(i = 0; i < TATE; i++){
    printf("Input word #%d: ",i+1);
    scanf("%s",buffer);
    arr[i] = malloc(sizeof(char) * strlen(buffer));
    strcpy(arr[i], buffer);
  }
  for(i = 0; i < TATE; i++){
    printf("Word #%d: %s\n", i+1, arr[i]);
  }
  
  for(i = 0; i < TATE; i++){
    free(arr[i]);
  }

  return 0;
}
