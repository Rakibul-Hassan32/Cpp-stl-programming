#include<bits/stdc++.h>
using namespace std;

void print(set<string> &m){
    for(auto &i: m){
        cout<<i<<endl;
    }
}
int main(){
    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ijk");   
    auto it = s.find("ijk");
    if(it != s.end())
       cout<<(*it)<<"\n\n";

       s.erase("def");
     print(s);
    return 0;
}