#include<bits/stdc++.h>
#define pb emplace_back
#define p push
#define e empty
using namespace std;
vector<int> vc;
bool comp(pair<int,int> &p,pair<int,int>   &q){
    vc.pb(p.second);vc.pb(q.second);
    return p.second<q.second;
}
int main(){
    vector<pair<int,int>> v;
    v.pb(make_pair(33,44));
    v.pb(make_pair(20,50));
    v.pb(make_pair(1,100));
    sort(v.begin(),v.end(),comp);
    for (int i = 0; i < 3; i++)
    {
       cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    for (int i = 0; i < vc.size(); i++)
    {
       cout<<vc[i]<<endl;
    }
    
}
/*    map<int,int> m;
   m={{1,2},{2,3},{1,2}};
   for (int i = 0; i < 3; i++)
   {
       cout<<m[i]<<endl;
       
   } */
/*    multiset<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(4);
    s.insert(0);
    s.insert(3);//unique and sorted
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    } 
 */
/*     set<int> s;
    s.insert(3);
    s.insert(4);
    s.insert(0);
    s.insert(3);//unique and sorted
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    } */
/*     priority_queue<int> q;

    for (int i = 0; i <5; i++)
    {
        q.push(i);
    }
    q.push(4);
    while (!q.e())
    {
       cout<<q.top()<<endl;
       q.pop();
    } */

/*     queue<int> q;
    q.push(4);
    q.push(20);
    q.push(100);
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
       
    } */
/*   stack<int> st;
  st.push(3);
  st.push(5);
  st.push(20);
  while (!st.empty())
  {
     cout<<st.top()<<endl;
     st.pop();
  } */
/*     vector<vector<string>> v(5,vector<string> (5,"showkatul"));
    for(int i=0;i<v.size();i++){
       for(int j=0;j<v[i].size();j++){
           cout<<v[i][j]<<" ";
       }
       cout<<endl;
    } */