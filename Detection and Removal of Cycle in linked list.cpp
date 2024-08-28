#include<iostream>

using namespace std;

////Floyd's Algorithms  also known as Hare & Tortoise Algorithm

class node
{
public:
    int data;
    node* next;

    node(int value)//constructor
    {
        data=value;
        next=NULL;
    }
};

//class node*head=NULL;

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

void make(node* &head,int pos)
{
    node* temp=head;
    node* start;

    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            start=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=start;
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

bool cycle(node* &head)
{
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}

void rmv(node* &head)
{
    node* slow=head;
    node* fast=head;

   do
   {
       slow=slow->next;
       fast=fast->next->next;
   }while(slow!=fast);

   fast=head;
   while(slow->next!=fast->next)
   {
       slow=slow->next;
       fast=fast->next;
   }
   slow->next=NULL;
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
    output(head);
    make(head,3);
    cout<<cycle(head)<<endl;
    rmv(head);
    cout<<cycle(head)<<endl;
    output(head);

    return 0;
}

