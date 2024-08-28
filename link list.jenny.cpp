#include<iostream>
#include<stdlib.h>

using namespace std;

class node
{
    public :
    int data;
    class node *next;
};
int main()
{
    class node *head,*newnode,*temp  ;
    head=NULL;
    int choice;
    cout<<"Enter how many data you wanna import: ";
    cin>>choice;

    while(choice--)
    {
    newnode=(struct node*)malloc(sizeof(class node));
    cout<<"Enter data :";

    cin>>newnode->data;
    newnode->next=NULL;
    if(head == NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }

    }


    temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        cout<<&temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}

