
#include<iostream>

using namespace std;

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

void del(node* &head,int value)
{
    if(head==NULL)
    {
        return;
    }

    if(head->next==NULL)
    {
        delf(head);
        return;
    }

    node* temp=head;
    while(temp->next->data!=value)
    {
        temp=temp->next;
    }
    node* del = temp->next;
    temp->next=temp->next->next;

    delete del;
}

void delf(node* &head)
{
    node* del = head;
    node* temp=head;

    head=head->next;
    delete del;
}

int main()
{
    node* head=NULL;
    last(head,1);
    last(head,2);
    last(head,3);
    output(head);
    first(head,0);
    output(head);
    cout<<search(head,5)<<endl;
    del(head,2);
    output(head);
    delf(head);
    output(head);

}
