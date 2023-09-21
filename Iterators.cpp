#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {2,3,4,8,9};
    
               //iterator
    vector<int>::iterator it = v.begin();
    //or
    auto it1 = v.begin()+2;

    v.insert(it1,78);
   // cout<<(*(it+3))<<endl;

   cout<<v[2]<<endl;

   auto it2 = v.end()-1;
   v.insert(it2,53);

  // v.erase(v.begin()+3);
  //or
  v.pop_back();

  /* for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
*/

  //or with the help of containers

  for(it=v.begin();it!=v.end();++it){
    cout<<*it<<" ";
  }
  cout<<endl;

  //access pairs
  vector<pair<int,int>> v_p = {{1,2},{8,9},{5,6}};
  vector<pair<int,int>>::iterator it5;
   for(it5=v_p.begin();it5!=v_p.end();++it5){
    //cout<<(*it5).first<<" "<<(*it5).second<<endl;
    //or
    cout<<it5->first<<" "<<it5->second<<endl;
  }
    return 0;
}