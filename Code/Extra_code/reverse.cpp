#include<bits/stdc++.h>

using namespace std;
int reverseNum(int n){
    int reverse=0;
    while (n>0)
    {
       int lastdigit=n%10;
       reverse=reverse*10+lastdigit;
       n=n/10;
    }
    return reverse;
    
}
int main(){
    int n=1234;
    cout<<reverseNum(n);
}