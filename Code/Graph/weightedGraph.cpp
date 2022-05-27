#include<bits/stdc++.h>

using namespace std;
const int N=1e3+10;

vector<pair<int,int>> v[N];
int main(){
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int v1,v2,wt;
        cin>>v1>>v2>>wt;
        v[v1].push_back({v2,wt});
        v[v2].push_back({v1,wt});
    }
    for(int i=0;i<n;i++){
        for(auto child:v[i]){
            cout<<"{"<<i<<","<<child.first<<", "<<child.second<<"}, ";
        }
        cout<<endl;
    }

}