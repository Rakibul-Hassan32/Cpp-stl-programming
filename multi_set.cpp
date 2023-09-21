#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &m){
    for(auto &i: m){
        cout<<i<<endl;
    }
}
int main(){
    multiset<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ijk");   
    s.insert("abc");

    // auto it = s.find("ijk");
    // if(it != s.end())
    //    cout<<(*it)<<"\n\n";

       //s.erase("def");
     print(s);
    return 0;
}