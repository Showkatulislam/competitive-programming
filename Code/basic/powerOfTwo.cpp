#include<bits/stdc++.h>

using namespace std;

bool powerL(int n){
    if(n==0)return false;
    else{
    while (n%2==0)
    {
       n=n/2;
    }
     return (n==1);
    }//O(n)
}
bool Ipower(int x){
    return (x&(x-1));
}
int main(){
cout<<Ipower(5);
}