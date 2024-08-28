#include<iostream>

using namespace std;

int main()
{
    int a[15]={0};

    a[0]=10;
    a[14]=150;

    for(auto b:a)
    {
        cout<<b<<" ";
    }
}
