#include<iostream>

using namespace std;

class node
{
public:
    int data;
    node* prev;
    node* next;

    node(int value)
    {
        data=value;
        prev=NULL;
        next=NULL;
    }
};

void first(node* &head, int value)
{
    node* n=new node(value);
    n->next=head;
    if(head!=NULL)
    {
      head->prev=n;
    }

    head=n;
}

void last(node* &head, int value)
{
    if(head==NULL)
    {
        first(head,value);
        return;
    }

    node* n=new node(value);
    node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void del1st(node* &head)
{
    node* del=head;
    head=head->next;
    head->prev=NULL;

    delete del;
}

void delt(node* &head, int pos)
{
    if (pos==1)
    {
        del1st(head);
    }
    node* temp=head;
    int count=1;

    while(temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    }

    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    {
      temp->next->prev=temp->prev;
    }

    delete temp;
}

void output(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<< " ";
        temp=temp->next;
    }cout<<endl;
}

int main()
{
    node*head=NULL;
    last(head,1);
    last(head,2);
    last(head,3);
    last(head,4);
    last(head,5);
    output(head);
    first(head,0);
    output(head);
    delt(head,5);
    output(head);
    del1st(head);
    output(head);
}
