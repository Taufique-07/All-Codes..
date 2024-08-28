#include<iostream>

using namespace std;

class node
{
    public:

    int data;
    node* next;

    node(int value)
    {
        data=value;
        next=NULL;
    }

};

class queue{
    public:
    node* front;
    node* rare;

    queue()
    {
        front=NULL;
        rare=NULL;
    }

    void enqueue(int value)
    {
         node* n = new node(value);

        if(front==NULL)
        {
            front=rare=n;
            return;
        }
        rare->next=n;
        rare=n;
    }

    void dequeue()
    {
        if (front==NULL)
        {
            cout<<"Empty Queue"<<endl;
            return;
        }

        node* del=front;
        front=front->next;

        delete del;
    }

     void output()
    {
    node* temp=front;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
   }

};

int main()
{
    queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.output();
    q.dequeue();
    q.dequeue();
    q.output();
}