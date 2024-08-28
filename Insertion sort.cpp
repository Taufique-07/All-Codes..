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

    for(int i=1; i<num; i++)
    {
        int current = a[i];
        int j=i-1;

        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }

        for(int i=0; i<num; i++)
    {
        cout<<a[i]<< " ";
    }
    cout<<endl;

    return 0;

}
