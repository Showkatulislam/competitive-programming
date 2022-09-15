#include<bits/stdc++.h>

using namespace std;

typedef struct Stack stk;

struct Stack{
    int size;
    int top;
    int *S;
};
void create(stk *st)
{
    cout<<"Enter the size:"<<endl;
    cin>>st->size;
    st->top=-1;
    st->S=new int[st->size];
}
void Display(stk st){
    for(int i=st.top;i>=0;i--)
        cout<<st.S[i]<<" ";
    cout<<endl;
}
void push(stk *st,int x){
    if(st->top==st->size-1)
        cout<<"Stack is overflow"<<endl;
    else{
        st->top++;
        st->S[st->top]=x;
    }
}
int pop(stk *st){
    if(st->top==-1){
        cout<<"Stack is underFlow"<<endl;
    }
    return st->S[st->top--];
}
int main(){
    stk st;
    create(&st);
    push(&st,12);
    push(&st,13);
    push(&st,14);
    push(&st,15);
    Display(st);
    cout<<"pop"<<pop(&st)<<endl;
    Display(st);

}