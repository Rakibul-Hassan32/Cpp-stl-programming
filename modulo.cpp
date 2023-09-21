#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    long long fact = 1;
    int m = 47;
    for(int i=2;i<=n;i++){
        fact = (fact*i)%m;
    }
    cout<<fact;
    return 0;
}