#include<bits/stdc++.h>
using namespace std;
// factorial of n
int fact(int n){
    if(n==0) return 1;
    return fact(n-1)*n;
}
int main(){
    int n;
    cin>>n;
    int r=fact(n);
    cout<<r<<endl;
    return 0;
}