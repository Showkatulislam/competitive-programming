#include<bits/stdc++.h>
using namespace std;
/* bool is_prime(int num){
    for (int i = 2; i < sqrt(num); i++)
    {
       if(num%i==0)return false;
    }
    return true;
}

void howMany(int num){
    map<int,int> m;
    int i=2;
    string str;
    while (num!=1)
    {
      
      if(num%i==0){
          num=num/i;
          m[i]++;
      }
      else{
          i++;
      }
      
    }
    for(auto e:m){
        cout<<e.first<<" "<<e.second<<endl;
    }
} */
void factor(int num){
    for (int i = 1; i <=sqrt(num); i++)
    {
        if(num%i==0){
            int res=num/i;
            cout<<i<<" and "<<res<<endl;
        }
    }  
}
string Rev(string name ,int n){
    if(n==0)return " ";
    return name[n-1]+Rev(name,n-1);
}
void patarn(int n){
    if(n==0)return;
    patarn(n-1);
    for(int i=1;i<=n;i++)
        cout<<i;
    cout<<endl;
}
void fun(int n){
    if(n==0)return;
    cout<<n<<endl;
    fun(n-1);
    cout<<n<<endl;
}
int main(){
   fun(5);
}