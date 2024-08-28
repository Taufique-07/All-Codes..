#include<iostream>

using namespace std;//this sort also known as o,1,2 sort

void swap(int a[],int m, int n)
{
    int temp=a[m];
    a[m]=a[n];
    a[n]=temp;
}

void dnfSort(int a[],int num)
{
    int low=0;
    int mid=0;
    int high=num-1;

    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a,low,mid);
            low++;
            mid++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(a,mid,high);
            high--;
        }
    }
}

int main()
{
    //1,12,0,0,1,2,2,1,0
    int num;
    cin>>num;

    int a[num];

    for(int i=0; i<num; i++)
    {
        cin>>a[i];
    }

    dnfSort(a,num);

    for(int i=0; i<num; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
