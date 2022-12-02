#include <bits/stdc++.h>
using namespace std;

struct pro{
    string s;
    int x;

    pro(){}
    pro(string s_,int x_):s(s_),x(x_){}
};

int main(){
    int n,q;
    int cnt = 0;
    cin>>n>>q;
    vector<string> name(n);
    vector<int> time(n);
    queue<pro> Q;
    pro a;
    for(int i=0;i<n;i++){
        cin>>a.s>>a.x;
        name[i]=a.s;
        time[i]=a.x;
        Q.emplace(a.s,a.x);
    }
    while(!Q.empty()){
        pro now = Q.front();
        Q.pop();

        if(now.x - q > 0){
            cnt += q;
            now.x -= q;
            Q.push(now);
            //Q.emplace(Q.front().s,Q.front().x);
            //Q.pop();
        }else{
            cnt += now.x;
            cout<<now.s<<' '<<cnt<<endl;
            //Q.pop();
        }
    }
    return 0;
}