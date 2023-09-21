/*/* Given t test cases in each test case a number N. Print its factorial for
each test casse %M
where M = 10^9+7
*/
#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
const int n = 1e5+10;
long long fact[n];

int main(){

    fact[0]=fact[1]=1;
    for(int i=2;i<=n;i++){
        fact[i] = fact[i-1]*i;
    }

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
   // long long fact = 1;
    
    cout<<fact[n]<<endl;;

    }
    //cout<<"Hello World";
    return 0;
}