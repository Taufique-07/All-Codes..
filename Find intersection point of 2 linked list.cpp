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

int inter(node* &head1,node* &head2)
{
    int len1=length(head1);
    int len2=length(head2);

    int def=0;
    node* ptr1,*ptr2;

    if(len1>len2)
    {
        def=len1-len2;
        ptr1=head1;
        ptr2=head2;
    }
    else
    {
        def=len2-len1;
        ptr1=head2;
        ptr2=head1;
    }

    while(def)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL)
        {
            return -1;
        }
        def--;
    }

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2)
        {
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    return -1;
}

void cross(node* head1,node* head2,int pos)
{
    node* temp1=head1;

    pos--;
    while(pos--)
    {
        temp1=temp1->next;
    }

    node* temp2=head2;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
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
int main()
{
    node* head1=NULL;
    node* head2=NULL;

    int a[]={1,2,3,4,5,6};

    for(int i=0; i<6; i++)
    {
        tail(head1,a[i]);
    }
    int b[]={9,10};
    for(int i=0; i<2; i++)
    {
        tail(head2,b[i]);
    }
    cross(head1,head2,3);
    output(head1);
    output(head2);

    cout<<inter(head1,head2)<<endl;
}
