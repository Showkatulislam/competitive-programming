#include<bits/stdc++.h>
#define I INT_MAX
using namespace std;

int edge[3][9]={
    {1,1,2,2,3,4,4,5,5},
    {2,6,3,7,4,5,7,6,7},
    {25,5,12,10,8,16,14,20,18}
};
int s[7]={-1,-1,-1,-1,-1,-1,-1};
int include[9]={0,0,0,0,0,0,0,0,0};
int result[2][6];
int find(int u){
    int x=u;
    while (s[x]>0)
    {
        x=s[x];
    }
    return x;
}
void Myunion(int u,int v)
{
    if(s[u]<s[v]){
        s[u]=s[u]+s[v];
        s[v]=u;
    }else{
        s[v]=s[v]+s[u];
        s[u]=v;
    }
}
int main(){
    int n=7,i,j,min,u,v,k;
    i=0;
    while (i<n-1)
    {
    min=INT_MAX;
    for(j=0;j<9;j++){
       if(include[j]!=1 && edge[2][j]<min){
           min=edge[2][j];
           k=j;
           u=edge[0][j];
           v=edge[1][j];
       }
    }
    include[k]=1;
    if(find(u)!=find(v)){
        result[0][i]=u;
        result[1][i]=v;
        Myunion(find(u),find(v));
        i++;
    }
    cout<<min<<" ";
    }  
    cout<<endl;
    for(i=0;i<n-1;i++){
        cout<<"("<<result[0][i]<<","<<result[1][i]<<"),"<<endl;
    } 
}