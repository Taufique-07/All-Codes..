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

node* reverse(node* &head)
{
    node* prev=NULL;
    node* current=head;
    node* next;

    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;

        prev=current;
        current=next;

    }
    return prev;
}

node* rec(node* &head)//recursive call for reverse
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    node*head2 =rec(head->next);
    head->next->next=head;
    head->next=NULL;

    return head2;
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
  //  node* head1=reverse(head);
  //  output(head1);
    node* head2=rec(head);
    output(head2);

}

