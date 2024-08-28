#include<iostream>

using namespace std;
#define n 10

class stack
{
    int* a;
    int top;
public:
    stack()
    {
        a=new int [n];
        top=-1;
    }

    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"stack Overflow"<<endl;
            return;
        }

        top++;
        a[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"No Element to Pop"<<endl;
            return;
        }

        top--;
    }

    int mark(){

        if(top==-1){
            cout<<"No Element in stack"<<endl;
            return -1;
        }

        return a[top];
    }

    bool empty(){
        return top==-1;
    }
};

int main()
{
    stack element;
    element.push(1);
    element.push(2);
    element.push(3);
    element.push(4);
    element.push(5);
    element.push(6);

    cout<<element.mark()<<endl;
    element.pop();
    element.pop();
    cout<<element.mark()<<endl;

    cout<<element.empty()<<endl;


}