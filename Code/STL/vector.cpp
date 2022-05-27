#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter Student Number"<<endl;
    cin>>n;
    vector<string> std;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        std.push_back(name);
    }
    cout<<std.size()<<endl;
    for(int i=0;i<n;i++){
      cout<<std[i]<<" ";
      std.pop_back();
    }
    cout<<endl<<std.size();

}