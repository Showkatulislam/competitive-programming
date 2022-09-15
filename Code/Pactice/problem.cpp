#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    int x,y;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        if(x<y){
            cout<<"FIRST"<<endl;
        }else if(y<x){
            cout<<"SECOND"<<endl;
        }else{
            cout<<"ANY"<<endl;
        }
    } 
}