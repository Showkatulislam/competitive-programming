#include<bits/stdc++.h>

using namespace std;

class Queue{
    private:
    int front;
    int rear;
    int size;
    int *Q;
    public:
    Queue(){
        front=rear=-1;
        size=10;
        Q=new int[size];
        }
    Queue(int size){
        front=rear=-1;
        this->size=size;
        Q=new int[size];
    }
    void enqueue(int x);
    int dequeue();
    void Display();
};
void Queue::enqueue(int x)
{
    if(rear==size-1){
        cout<<"Queue is full"<<endl;
    }
    else{
        rear++;
        Q[rear]=x;
    }
}

int Queue::dequeue(){
    int x=-1;
    if(front==rear)
        cout<<"Queue is Empty"<<endl;
    else{
        x=Q[front+1];
        front++;
    }
    return x;
}
void Queue::Display()
{
    for(int i=front+1;i<=rear;i++){
    cout<<Q[i]<<endl;
    }
}

int main(){
    Queue q(5);
    q.enqueue(5);
    q.enqueue(2);
    q.enqueue(20);
    q.enqueue(22);
    q.Display();
}