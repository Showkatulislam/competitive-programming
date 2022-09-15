#include<bits/stdc++.h>
using namespace std;
int c=0;
void backtaking(int n){
    c++;
    if(n==0)return;
    backtaking(n-1);
    cout<<"i am back"<<++n<<endl;
}
int main(){
    backtaking(5);
    cout<<c;
}