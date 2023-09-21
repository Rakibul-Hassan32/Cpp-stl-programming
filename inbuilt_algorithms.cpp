#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    auto it = min_element(arr.begin(),arr.end());
    cout<<(*it)<<endl;

    auto it1 = max_element(arr.begin(),arr.end());
    cout<<(*it1)<<endl;

    int sum = accumulate(arr.begin(),arr.end(),0);
    cout<<sum<<endl;

    int ct = count(arr.begin(),arr.end(),3);
    cout<<ct<<endl;

    int element = *find(arr.begin(),arr.end(),3);
    cout<<element<<endl;

    reverse(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}