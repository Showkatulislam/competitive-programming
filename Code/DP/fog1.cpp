#include<bits/stdc++.h>

using namespace std;
int h[10];
int fun(int i){
    if(i==0)return 0;
    int cost=INT_MAX;
    cost=min(cost,fun(i-1)+abs(h[i]-h[i-1]));
    if(i>1)
    cost=min(cost,fun(i-2)+abs(h[i]-h[i-2]));
    return cost;
}
int main(){
    h[0]=10;
    h[1]=30;
    h[2]=40;
    h[3]=20;
    cout<<fun(4);
}