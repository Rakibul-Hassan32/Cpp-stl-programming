#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {2,3,4,8,9};
    
//     for(int &value : v){
//     value++;
//    }

// use & in range based loops because generally it only give you the copy, not the actual value

   for(auto &value : v){
    cout<<value<<" ";
   }
   cout<<endl;

  //simillarly for vector of pairs
   
   vector<pair<int,int>> v_p = {{1,2},{8,9},{5,6}};

   //for(pair<int,int> &value : v_p){
    for(auto &value : v_p){
    cout<<value.first<<" "<<value.second<<endl;
   }
   
   //auto dynamically determine datatype
   auto f = 5.298;
   cout<<f<<endl;
    return 0;
}