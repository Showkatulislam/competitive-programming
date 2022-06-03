#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> q;
    q.push(3);
    q.push(4);
    q.push(33);
    while (!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
        /* code */
    }
    
}