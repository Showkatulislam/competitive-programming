#include<bits/stdc++.h>

using namespace std;

const int N=1e5+10;
vector<int> g[N];
int vis[N];
void bfs(int source){
    queue<int> q;
    cout<<source<<" ";
    q.push(source);
    vis[source]=1;
    while (!q.empty())
    {
        int cur_v=q.front();
        q.pop();
        for(int child:g[cur_v]){
            if(!vis[child]){
                cout<<child<<" ";
                q.push(child);
                vis[child]=1;
            }
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
}
/* 1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6 */