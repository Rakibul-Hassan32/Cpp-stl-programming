#include<bits/stdc++.h>
using namespace std;

// basic

void sum(int n){
    if(n == 0) return;
    sum(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    sum(n);
    return 0;
}