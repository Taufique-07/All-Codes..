#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;

    int a[num];

    for (int i=0; i<num; i++)
    {
        cin>>a[i];
    }
    for(int i=num; i<=0; i--)
    {
        cout<<a[i];
    }

}
