#include <bits/stdc++.h>

using namespace std;

typedef struct Node node;

struct Node
{
    int data;
    Node *next;
} *top = NULL;

void push(int x)
{
    node *t = new node();
    if (t == NULL)
        cout << "Stack is Full" << endl;
    else
    {
        t->data = x;
        t->next =top;
        top = t;
    }
}
int pop()
{
    node *t;
    int x=-1;
    if(top==NULL)
        cout<<"Stack is Empty";
    else{
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}
void Display(){
    node *p;
    p=top;
    while (p)
    {
       cout<<p->data<<" ";
       p=p->next;
    }
    cout<<endl;
    
}
int main()
{
    push(10);
    push(11);
    push(12);
    push(13);
    push(14);
    Display();
    cout<<pop();
}