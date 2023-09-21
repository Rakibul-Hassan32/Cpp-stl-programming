#include<bits/stdc++.h>
using namespace std;

void print(set<string> &m){
    for(auto &i: m){
        cout<<i<<endl;
    }
}
int main(){
    set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s1;
        cin>>s1;
        s.insert(s1);
    }
     print(s);
    return 0;
}