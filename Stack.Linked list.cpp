#include<iostream>

using namespace std;

class stack
{
public:

    int data;
    stack *next;

    stack *top;

    stack()
    {
        top=nullptr;
    }

    stack(int value)
    {
        data=value;
        next=nullptr;
    }

    void push(int value)
    {
        stack* newnode = new stack(value);
        newnode->next=top;
        top=newnode;
    }

    void pop()
    {
        if(top==nullptr)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        stack *temp=top;
        top=top->next;
        delete temp;
    }

    int peek()
    {
        if(top==nullptr)
        {
            cout<<"Stack is empty."<<endl;
            return -1;
        }
        return top->data;
    }

    bool check()
    {
        return top==nullptr;
    }

    void output()
    {
        if(top==nullptr)
        {
            cout<<"stack is empty."<<endl;
        }
        stack *temp=top;

        while(temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    cout<<"Enter how many data you wanna push : ";
    int num;
    cin>>num;

    stack a;

    int value;
    for(int i=0; i<num; i++)
        {
            cin>>value;
            a.push(value);
        }

    a.output();
    a.pop();
    a.output();
    cout<<endl;
    cout<<"Top element is :"<<a.peek()<<endl;
    cout<< "Status : " <<(a.check()? "Empty" : "Not Empty")<<endl;
    cout<<endl;
     a.pop();
      a.output();
      cout<<endl;
      a.pop();
       a.output();
       cout<<endl;
       a.pop();
        a.output();
        cout<<endl;
        a.pop();
         a.output();
         cout<<endl;
         a.pop();
          a.output();
          cout<<endl;
        cout<< "Status : " <<(a.check()? "Empty" : "Not Empty")<<endl;
         a.push(7);
          a.output();
          cout<<endl;
        cout<< "Status : " <<(a.check()? "Empty" : "Not Empty")<<endl;
          a.output();
          cout<<endl;
}
