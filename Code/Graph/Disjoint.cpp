#include<bits/stdc++.h>

using namespace std;

int s[10]={-1};
void Union(int u,int v){
    if(s[u]<s[v]){
        s[u]=s[u]+s[v];
        s[v]=u;
    }
    else{
        s[v]=s[u]+s[v];
        s[u]=v;
    }  
}
int find(int u){ 
    int x=u;
    while (s[x]>u)
    {
       x=s[x];
    }
    return x;
}
int main(){
    
}