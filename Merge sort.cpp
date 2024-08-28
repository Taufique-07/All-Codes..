#include<iostream>

using namespace std;

void merge(int arr[],int st, int mid, int ed)
{
    int n1=mid-st+1;
    int n2=ed-mid;


    int a[n1];
    int b[n2];//temp array for sorting

    for(int i=0; i<n1; i++)
    {
        a[i]=arr[st+i];
    }
    for(int i=0; i<n2; i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0,j=0;
    int k=st;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }

    while(i<n1)
    {
        arr[k]=a[i];
        k++;
        i++;
    }

    while(i<n2)
    {
        arr[k]=b[j];
        k++;
        j++;
    }

}

void mergesort(int a[],int st, int ed)
{
    if(st<ed)
    {
        int mid = (st+ed)/2;
        mergesort(a,st,mid);
        mergesort(a,mid+1,ed);

         merge(a,st,mid,ed);
    }

}


int main()
{
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++)
        {
        cin >> arr[i];
        }

    mergesort(arr, 0, num - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < num; i++)
        {
        cout << arr[i] << " ";
        }
    cout << endl;

    return 0;
}

