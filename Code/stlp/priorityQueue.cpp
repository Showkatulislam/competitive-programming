#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> q;
    q.push(10);
    q.push(30);
    q.push(20);
    q.push(5);
    q.push(1);
    while (!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
        /* code */
    }
    
}