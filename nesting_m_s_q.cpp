#include<bits/stdc++.h>
using namespace std;
int main(){
    
    map<int, multiset<string>> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int marks;
        string name;
        cin>>name>>marks;
        m[-1*marks].insert(name);
    }
    
    for(auto &marks_students_pr : m){
        auto &students = marks_students_pr.second;
        int marks = marks_students_pr.first;
        for(auto student: students){
            cout<<student<<" "<<-1*marks<<endl;
        }
    }
    return 0;
}