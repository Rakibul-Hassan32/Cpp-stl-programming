#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string> &v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    //v.push_back(7);
    cout<<endl;
}
int main(){

    vector<string> str;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        //printVec(str);
        str.push_back(s);
    }
printVec(str);
    /*vector<int> v(5,4);
    v.push_back(2);
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x);
    }
   printVec(v);
   v.pop_back();
   printVec(v);

   vector<int> &v2 = v;//o(n)
   v2.push_back(5);
   printVec(v2);
   printVec(v);
*/
    return 0;
}