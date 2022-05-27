#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of student"<<endl;
    cin>>n;
    pair<int,string> std[n];
    for(int i=0;i<n;i++){
        int roll;
        string name;
        cout<<"Enter The Roll & Student Name"<<endl;
        cin>>roll>>name;
        std[i].first=roll;std[i].second=name;
    }
    cout<<"Print The Student"<<endl;
    for(int i=0;i<n;i++){
        cout<<std[i].first<<" "<<std[i].second<<endl;
    }
}