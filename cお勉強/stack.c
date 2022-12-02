#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top,S[100];

void push(int);
int pop(void);

int main(){
    int x,a,b;
    top = 0;
    char s[100];
    while(scanf("%s",s) != EOF){
        if(s[0] == '+'){
            a = pop();
            b = pop();
            push(a + b);
        }else if(s[0] == '-'){
            b = pop();
            a = pop();
            push(a - b);
        }else if(s[0] == '*'){
            a = pop();
            b = pop();
            push(a * b);
        }else{
            push(atoi(s));
        }
    }
    printf("%d\n",pop());
    return 0;
}

void push(int x){
    top++;
    S[top] = x;
}

int pop(void){
    top--;
    return S[top+1];
}