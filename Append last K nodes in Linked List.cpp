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

//node* head= NULL;

void tail(node* &head,int value)
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


bool search(node* head, int key)
{
    node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void output(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int length(node* head)
{
    int len=0;

    node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}


node* kappend(node* &head, int k)
{
    node* newtail, *newhead, *tail=head;

    int len = length(head);
    k=k%len;
    int count=1;

    while(tail->next!=NULL)
    {
        if(count==len-k)
        {
            newtail=tail;
        }
        if(count==len-k+1)
        {
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }

    newtail->next=NULL;
    tail->next=head;

    return newhead;
}

int main()
{
    node* head=NULL;
    int a[]={1,2,3,4,5,6};
    for(int i=0; i<6; i++)
    {
        tail(head,a[i]);
    }

    output(head);
    int k;
    cout<<"Enter Append Number :";
    cin>>k;
    node* newhead=kappend(head,k);
    output(newhead);

    return 0;
}
