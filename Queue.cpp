#include<iostream>

using namespace std;

#define n 10

class queue
{
    int* a;
    int front;
    int rare;

public:
     queue()
     {
        a=new int [n];
        front=rare=-1;
     }

     void enqueue(int x)
     {
        if(rare==n-1)
        {
            cout<<"Queue Overflow"<<endl;
            return;
        }

        rare++;
        a[rare]=x;

        if(front==-1)
        {
            front++;
        }
     }

     void dequeue()
     {
        if(front==-1 || front>rare)
        {
            cout<<"No Elements is Present"<<endl;
            return;
        }
        front++;
     }

     void output()
    {
        if(front == -1 || front > rare)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        for(int i = front; i <= rare; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.output();
    q.dequeue();
    q.dequeue();
    q.output();
}