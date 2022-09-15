//1/pow(1,1)+1/pow(2,2)+1/pow(3,3);
//pow(1,1)return 1;
#include<bits/stdc++.h>
using namespace std;
float Series(int n){
    if(n==1){
        return 1;
    };
    return Series(n-1)+1/pow(n,n);
}
int main(){
    cout<<Series(3);
}