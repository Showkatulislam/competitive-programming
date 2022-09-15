#include<bits/stdc++.h>

using namespace std;

///draw genaration tree 
typedef struct tree Gtree;
struct tree
{
    string name;
    Gtree *lGtree;
    Gtree *rGtree;
}*root;

void CreateGanarationTree(string name[]){
    root=new Gtree();
    root->name=name[0];
    root->lGtree=NULL;
    root->rGtree=NULL;
    queue<Gtree> q;
   
}

int main(){

}