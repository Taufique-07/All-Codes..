#include<iostream>

using namespace std;

int main()
{
    int a,b,c,smallest;
    cout<<"Enter 3 values :"<<endl;
    cin>>a >>b >>c;

    if(a<b && a<c)
    {
        smallest=a;
    }
    else if (b<a && b<c)
    {
        smallest=b;
    }
    else
    {
        smallest=c;
    }
    cout<<smallest<<" is the Smallest."<<endl;

    return 0;
}
