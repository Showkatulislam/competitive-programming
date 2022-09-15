#include<bits/stdc++.h>

using namespace std;
int hextoDec(string s){
    int len=s.size(),x;
    int ans=0;
    for(int i=len-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            ans+=x*(s[i]-'0');
        }
        else if(s[i]>='A' && s[i]<='F'){
            ans+=x*(s[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}
int main(){
    string x;
    cin>>x;
    cout<<hextoDec(x);
}