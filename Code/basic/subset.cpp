#include<bits/stdc++.h>

using namespace std;
vector<char> sub[8];
void subset(string a,int n){
    for(int i=0;i<=pow(2,n);i++){
        for(int j=0;j<=n;j++){
            if(i&(1<<j)){
               sub[i].push_back(a[j]);
            }
        }
        cout<<endl;

    }
}
int main()
{
  subset("ABC",3);
  for(vector<char> s:sub){
      cout<<"{";
      for(char l:s){
          cout<<l<<",";
      }
       cout<<"}"<<endl;
  }
}