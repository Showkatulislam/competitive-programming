#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> list1;
    list<int> list2;
    for (int i = 0; i < 5; i++)
    {
       list1.push_back(i);
       list2.push_front(i);
    }
    list2.remove(4);
    cout<<"list 1 front "<<list1.front()<<endl;
    cout<<"list 2 front "<<list2.front()<<endl;

    
}