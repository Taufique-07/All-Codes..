#include<iostream>
#include<stdbool.h>

using namespace std;

int main()
{
    int num;
    cin>>num;

    int a[num];
    int b[100]={0};

    int n;
    int max=0;

    for(int i=0; i<num; i++)
        {
            cin>>a[i];
            b[a[i]]++;

            if(a[i]>max)
                max=a[i];
        }


    for(int i=0; i<num; i++)
    {
        if(b[a[i]]==1)
            cout<<a[i]<<endl;
    }
}
