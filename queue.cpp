#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string> q;
    q.push("abc");
    q.push("def");
    q.push("jbc");
    q.push("lef");
    q.push("obc");
    q.push("pef");

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}