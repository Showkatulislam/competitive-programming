#include<bits/stdc++.h>
using namespace std;
typedef struct node home;
struct node{
    string name;
    home *next;
}*first,*lastHome;
void CreateLink(string name[]){
    first =new home();
    first->name=name[0];
    first->next=NULL;
    home *newHome;
    lastHome=first;
    for (int i = 1; i <4; i++)
    {
       newHome=new home();
       newHome->name=name[i];
       newHome->next=NULL;
       lastHome->next=newHome;
       lastHome=newHome;
    }  
}
void AddHomeFirst(string name){
    home *temp=new home();
    temp->name=name;
    temp->next=first;
    first=temp;
}
void ShowHomeLink(){
    home *t=first;
    while (t)
    {
       cout<<t->name<<" ";
       t=t->next;
    }
    
}
int main(){
    string name[]={"nur hossain","showkat","nuro","elies"};
    CreateLink(name);
    AddHomeFirst("yousof");
    AddHomeFirst("anwer");
    AddHomeFirst("rakib");
    ShowHomeLink();
    
}