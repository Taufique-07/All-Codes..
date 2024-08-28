#include<iostream>

using namespace std;

int main()
{
    const int num=5;

    int a[num];
    int b[num];
    int c[num];

    for(auto& i : a)
        cin>>i;

    for(auto& j : b)
        cin>>j;

    for(int i=0; i<num; i++)
    {
        c[i]=a[i]+b[i];
    }

    for(auto k:c)
        cout<<k<<" ";
}
