#include<bits/stdc++.h>

using namespace std;
int CountBinary(int n){
    int c=0;
    while (n>0)
    {
        if(n%2==1)c++;
        n/=2;
    }
    return c;
    
}
int main(){
    cout<<CountBinary(5);
}