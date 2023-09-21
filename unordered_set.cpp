#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &m){
    for(auto &i: m){
        cout<<i<<endl;
    }
}
int main(){
    unordered_set<string> s;
    s.insert("def");
    s.insert("aef");
    s.insert("ijk");   
    auto it = s.find("ijk");
    if(it != s.end())
       cout<<(*it)<<"\n\n";

       //s.erase("def");
     print(s);
    return 0;
}