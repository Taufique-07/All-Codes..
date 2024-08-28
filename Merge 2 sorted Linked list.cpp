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

node* merge(node* &head1,node* &head2)
{
    node* ptr1 = head1;
    node* ptr2 = head2;
    node* dummynode=new node(-1);
    node* ptr3 = dummynode;

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data < ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
           ptr3->next=ptr2;
           ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }

    while(ptr1!=NULL)
    {
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }

    while(ptr2!=NULL)
    {
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }

    return dummynode->next;
}

node* mergeRecurtion(node* &head1, node* &head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }

    node* result;

    if(head1->data < head2->data)
    {
        result=head1;
        result->next=mergeRecurtion(head1->next,head2);
    }
    else
    {
        result=head2;
        result->next=mergeRecurtion(head1,head2->next);
    }

    return result;
}

int main()
{
    node* head1=NULL;
    node* head2=NULL;

    int a[]={1,4,5,7};
    int b[]={2,3,6};

    for(int i=0;i<4; i++)
    {
        last(head1,a[i]);
    }

    for(int i=0;i<3; i++)
    {
        last(head2,b[i]);
    }

    output(head1);
    output(head2);

   // node* newhead=merge(head1,head2);
   // output(newhead);
    node* rechead=mergeRecurtion(head1,head2);
    output(rechead);
}
