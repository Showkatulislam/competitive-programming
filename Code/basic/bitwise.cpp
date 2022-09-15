#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cout<<"Enter the testcase number"<<endl;
    cin>>t;
    while (t--)
    {
        int a,b;char c;
        cout<<"Enter the a  & b and operation"<<endl;
        cin>>a>>b>>c;
        if(c=='&'){
            if(a>b){
                cout<<(a&b)<<endl;
            }else{
                cout<<(b&a)<<endl;
            }
        }
        if(c=='|'){
            if(a>b){
                cout<<(a|b)<<endl;
            }else{
                cout<<(b|a)<<endl;
            }
        }
        if(c=='^'){
            if(a>b){
                cout<<(a^b)<<endl;
            }else{
                cout<<(b^a)<<endl;
            }
        }
    }
    
}