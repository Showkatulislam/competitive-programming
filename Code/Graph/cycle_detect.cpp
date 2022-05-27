#include<bits/stdc++.h>

using namespace std;
const int N=1e3+10;
vector<int> g[N];
bool vis[N];
bool dfs(int vertex,int par){
    vis[vertex]=true;
    bool isloopExists=false;
    for(int child:g[vertex]){
        if(vis[child] && child==par)continue;
        if(vis[child]) return true;
       isloopExists !=dfs(child,vertex);
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
     if(dfs(i,0)){
         
     }


 }
}