#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    //v.push_back({5,2});
    cout<<endl;
}
int main(){
     int n;
     cin>>n;
     vector<int> v[n];
     for(int i=0;i<n;i++){
        int N;
        cin>>N;
        for(int j=0;j<N;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
     }

     for(int i=0;i<n;i++){
       printVec(v[i]);
     }
    cout<<v[0][1];
    return 0;
}