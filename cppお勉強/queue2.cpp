#include <bits/stdc++.h>
using namespace std;

#define MAX 100000

struct pro{
    string s;
    int x;
};

void push(pro);
void pop(void);
bool empty(void);
pro front(void);

vector<pro> Q(MAX); 
int head = 0;
int tail = 0;

int main(){
    int n,q;
    int cnt = 0;
    cin>>n>>q;
    pro a;
    for(int i=0;i<n;i++){
        cin>>a.s>>a.x;
        push(a);
    }
    while(!empty()){
        pro now = front();
        pop();
        if(now.x - q > 0){
            cnt += q;
            now.x -= q;
            push(now);
        }else{
            cnt += now.x;
            cout<<now.s<<' '<<cnt<<endl;
        }
    }
    return 0;
}

void push(pro a){
    if((tail+1)%MAX == head){
        return;
    }else{
        Q[tail] = a;
        tail++;
        tail = tail % MAX;
    }
}

void pop(){
    head++;
    head = head % MAX;
}

bool empty(){
    return head == tail;
}

pro front(){
    return Q[head];
}