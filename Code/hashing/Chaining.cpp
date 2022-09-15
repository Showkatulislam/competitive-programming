#include<bits/stdc++.h>

using namespace std;
typedef struct Node node;
struct Node{
    int data;
    node *next;
};

void SortedInsert(node **H,int x)
{
    node *t,*q=NULL,*p=*H;
    t=new node();
    t->data=x;
    t->next=NULL;
    if(*H==NULL){
        *H=t;
    }else{
        while (p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        t->next=q->next;
        q->next=t;    
    }
}
node *Hsearch(node *p,int k){
    while (p)
    {
        if(k==p->data){
            return p;
        }
        p=p->next;
    }
    return NULL;
    
}
int hashf(int key){
    return key%10;
}
void Insert(node *H[],int key)
{
    int index=hashf(key);
    SortedInsert(&H[index],key);
}
int main()
{
    node *H[10];
    for(int i=0;i<10;i++)
        H[i]=NULL;
    Insert(H,12);
    Insert(H,13);
    Insert(H,15);
    Insert(H,18);
    node *ser=Hsearch(H[hashf(12)],12);
    cout<<ser->data;
}
