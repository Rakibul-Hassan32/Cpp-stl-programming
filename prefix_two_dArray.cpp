/* given 2D array a of n*n integars. Given quesries Q
and in each query given a,b,c and d - print sum of square 
represented by (a,b) as top left point and (c,d) as top
bottom ritght point
Constraints
1<= N<= 10^3*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int ar[N][N];
long long pf[N][N];

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
     for(int j=1;j<=n;++j){
        cin>>ar[i][j];
        pf[i][j]=ar[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
     }
    }

    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;  

    cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;
    }
     
    return 0;
}