#include<bits/stdc++.h>
using namespace std;
//lamda
// auto sum = [](int x,int y){return x+y;};
    // cout<<sum(5,9)<<endl;
int main(){
    vector<int> v={-2,-1,5};
    cout<<all_of(v.begin(),v.end(), [](int x){return x>0;})<<endl;
    cout<<any_of(v.begin(),v.end(), [](int x){return x>0;})<<endl;
    cout<<none_of(v.begin(),v.end(), [](int x){return x>0;});
    return 0;
}