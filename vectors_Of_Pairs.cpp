#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    v.push_back({5,2});
    cout<<endl;
}
int main(){
   // vector<pair<int, int>> v = {{1,2},{2,3},{4,5},{9,10}};
     //printVec(v);
     vector<pair<int, int>> v;
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    printVec(v);
    printVec(v);
    return 0;
}