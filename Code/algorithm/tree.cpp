#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
typedef struct Node node;
struct Node{
    string name;
    node *Lnode;
    node *Rnode;
}*root;
int main()
{
    root=new node();
    root->name="showkatul";
    root->Lnode=NULL;
    root->Rnode=NULL;
    cout<<sizeof(root);
}