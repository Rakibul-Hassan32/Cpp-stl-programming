#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &m){
    cout<<m.size()<<endl;
    for(auto &it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main(){
    
    map<int, string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
   auto it = m.find(7);
  
   if(it != m.end())
   m.erase(it);
//    if(it == m.end()){
//     cout<<"No value";
//    }
//    else{
//     cout<<(*it).first<<" "<<(*it).second<<endl;
//    }
    print(m);
    
    
   cout<<endl;
    return 0;
}