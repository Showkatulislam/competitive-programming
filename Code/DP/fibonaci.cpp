#include<bits/stdc++.h>

using namespace std;
int a[10+4];
int fib(int n)
{
    if(n<=1){
        a[n]=n;
        return n;
    }
    if(a[n]!=-1){
        return a[n];
    }
    a[n]=fib(n-1)+fib(n-2);
    return a[n];
}

int main()
{
    memset(a,-1,sizeof(a));
    cout<<fib(7);
}