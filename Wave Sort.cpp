#include<iostream>

using namespace std;

void swap(int a[],int i,int j)
{
    int temp = a[i];
    a[i]=a[j];
    a[j]=temp;
}

void waveSort(int a[],int num)
{
    for(int i=1; i<num; i+=2)
    {
        if(a[i]>a[i-1])
        {
            swap(a,i,i-1);
        }
        if(a[i]>a[i+1] && i<=num-2)
        {
            swap(a,i,i+1);
        }
    }
}

int main()
{
    //1 3 4 7 5 6 2
    int num;
    cin>>num;

    int a[num];

    for(int i=0; i<num; i++)
    {
        cin>>a[i];
    }

    waveSort(a,num);

    for(int i=0; i<num; i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}
