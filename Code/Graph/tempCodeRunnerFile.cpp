#include<bits/stdc++.h>

using namespace std;
const int N=1e3+10;
vector<vector<int>> cc;
vector<int> current_vec;
vector<int> g[N];
bool vis[N];
void dfs(int vertex){
    vis[vertex]=true;
    current_vec.push_back(vertex);
    for(int child:g[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }
}
int main()
{
 int n,m;
 cin>>n>>m;
 for(int i=0;i<m;++i){
     int v1,v2;
     cin>>v1>>v2;
     g[v2].push_back(v1);
     g[v1].push_back(v2);
 }
 int ct=0;
 for(int i=1;i<=n;i++){
     if(vis[i]) continue;
     current_vec.clear();
     dfs(i);
     cc.push_back(current_vec);
     ct++;
 }
 cout<<"number of connected graph"<<ct<<endl;
 for(auto c_cc:cc){
     for(int ver:c_cc){
         cout<<ver<<" ";
     }
     cout<<endl;
 }
}