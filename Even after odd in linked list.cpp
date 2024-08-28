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


void last(node* &head,int value)
{

    node*n=new node(value);

    if(head==NULL)
    {
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void first(node* &head,int value)
{
    node*n=new node(value);
    n->next=head;
    head=n;
}

void output(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<< "->";
        temp=temp->next;
    }
    cout<< "NULL";
    cout<<endl;
}

void even(node* &head)
{
    node* odd=head;
    node* even=head->next;
    node* start=even;

    while (odd->next!=NULL && even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    
    odd->next=start;
    if(odd->next!=NULL)
    {
        even->next=NULL;
    }
}

int main()
{
    node* head=NULL;

    int a[]={1,2,3,4,5,6};

    for(int i=0; i<6;i++)
    {
        last(head,a[i]);
    }
    output(head);
    even(head);
    output(head);
}