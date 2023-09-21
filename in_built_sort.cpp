#include<bits/stdc++.h>
using namespace std;

bool cmp1(pair<int,int> a, pair<int, int> b){
    if(a.first != b.first){
        return a.first>b.first;
    }
    else{
        return a.second>b.second;
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }

    //sort(arr,arr+4);
   // sort(arr.begin(),arr.end());

   //custom behaviour in sorting
   sort(arr.begin(),arr.end(),cmp1);
    for(int i=0;i<n;i++){
       cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    cout<<endl;
    return 0;
}