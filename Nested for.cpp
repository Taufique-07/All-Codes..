#include<iostream>

using namespace std;

int main()
{
    int a[] = {10,1,3,-4,7,5};
    int size=sizeof(a)/sizeof(a[0]);
    int sum=0,m=0;

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<i; j++)
        {
            sum+=a[i]+a[j];
            m+=a[i]*a[j];
        }
    }

    cout<<sum<<" "<<m<<endl;
}
