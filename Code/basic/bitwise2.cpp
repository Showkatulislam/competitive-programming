#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        char c;
        cout<<"Enter number how bit shift operation"<<endl;
        cin>>x>>y>>c;
        if(c=='<'){
            cout<<(x<<y)<<endl;
        }
        if(c=='>'){
            cout<<(x>>y)<<endl;
        }
    }
    
}