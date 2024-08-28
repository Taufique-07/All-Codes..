#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;

    int a[num];

    for(int i=0; i<num; i++)
    {
        cin>>a[i];
    }

    for(int i=0 ;i<num-1; i++)
    {
        for(int j=i+1; j<num; j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;

            }
        }
    }

    for(int i=0; i<num; i++)
    {
        cout<<a[i] <<" ";
    }
    cout<<endl;

    return 0;
}
