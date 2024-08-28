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

void first(node* &head,int value)
{
    node*n=new node(value);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void last(node* &head,int value)
{

    node*n=new node(value);

    if(head==NULL)
    {
        first(head,value);
        return;
    }

    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void dfirst(node* &head)
{
    if(head==NULL)
    {
        return;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }

    node* del=head;
    temp->next=head->next;
    head=head->next;

    delete del;
}

void dlast(node* &head,int pos)
{
    if(pos==1)
    {
        dfirst(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1)
    {
        temp=temp->next;
        count++;
    }

    if(temp->next==head)
    {
        return;
    }
    node* del=temp->next;
    temp->next=temp->next->next;

    delete del;
}

void output(node* head)
{
    node* temp=head;
    do
    {
        cout<<temp->data<< "->";
        temp=temp->next;
    }while(temp!=head);
    cout<< "NULL";
    cout<<endl;
}

int main()
{
    node* head=NULL;
    last(head,1);
    last(head,2);
    last(head,3);
    last(head,4);
    last(head,5);
    last(head,6);
    last(head,7);
    output(head);
    dlast(head,7);
    output(head);
    dlast(head,1);
    output(head);

    return 0;
}


