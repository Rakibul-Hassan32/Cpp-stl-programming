#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &m){
    for(auto &i: m){
        cout<<i<<endl;
    }
}
int main(){
    unordered_set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s1;
        cin>>s1;
        s.insert(s1);
    }
    int q;
    cin>>q;
    while(q--){
        string st;
        cin>>st;

        auto it = s.find(st);
        if(it != s.end()){
            cout<<"Yes"<<endl;
        }
        else
           cout<<"No"<<endl;
    }
    // print(s);
    return 0;
}