#include<iostream>

using namespace std;

//pivot = pi

void swap(int a[], int i, int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

int partition(int a[],int start, int end)
{
    int pivot=a[end];
    int i=start-1;

    for(int j=start; j<end; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a,i,j);
        }
    }

    swap(a,i+1,end);
    return i+1;
}


void quickSort(int a[],int start, int end)
{
    if(start <end)
    {
        int pi = partition(a,start,end);
        quickSort(a,start,pi-1);
        quickSort(a,pi+1,end);
    }
}

int main()
{
    int num;
    cin>>num;

    int a[num];

    for(int i=0; i<num; i++)
    {
        cin>>a[i];
    }

    quickSort(a,0,num-1);

    for(int i=0; i<num; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;

}



