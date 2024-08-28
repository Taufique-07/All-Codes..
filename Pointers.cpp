#include<iostream>

using namespace std;

void swap(int *n, int *m)
{
    int temp=*n;
    *n=*m;
    *m=temp;
}

int main()
{
    int a=20;
    int* ptr;
    ptr=&a;

    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    *ptr=50;
    cout<<a<<endl;

    ptr++;
    cout<<ptr<<endl;

    int b[]={1,2,3};
    cout<<*b<<endl;

    int *ptr2=b;

    for(int i=0; i<3; i++)
    {
        cout<<*ptr2<< " ";
        ptr2++;
    }
    cout<<endl;
        for(int i=0; i<3; i++)
    {
        cout<<*(b+i)<< " ";
    }

    int c=10;
    int *p =&c;

    cout<<*p<<endl;

    int**q=&p;
    cout<<*q<<endl;
    cout<<**q<<endl;

    int n=2;
    int m=4;
    int* o=&n;
    int* r=&m;

    swap(o,r);
    cout<<n<< " "<<m<<endl;

    swap(&n,&m);
    cout<<n<< " "<<m<<endl;


}
