#include<bits/stdc++.h>

using namespace std;
int c=0;
void fun(int n){
    c++;
    if(n==5)return;
    fun(n+1);
    fun(n+1);
    cout<<"i am"<<n<<endl;
}

int main(){
    fun(1);
    cout<<c;
}