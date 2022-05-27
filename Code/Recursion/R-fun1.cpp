#include<bits/stdc++.h>

using namespace std;
int c=0;
void fun(int n)
{
    if(n>0){
        c++;
        fun(n-2);
        fun(n-1);
        cout<<n<<" ";
        cout<<"hi done "<<n<<endl;
       
    }
}
int main()
{
    int n=2;
    fun(n);
    cout<<"Number of call "<<c;
}