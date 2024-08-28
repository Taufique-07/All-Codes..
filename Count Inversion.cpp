#include<iostream>

using namespace std;

long long merge(int a[],int low,int mid,int high)
{
    long long inv =0;
    int n1= mid-low+1;
    int n2=high-mid;

    int b[n1];
    int c[n2];

    for(int i=0; i<n1; i++)
    {
        b[i]=a[low+i];
    }

    for(int i=0; i<n2; i++)
    {
        c[i]=a[mid+i+1];
    }

    int i=0,j=0,k=low;

    while(i<n1 && j<n2)
    {
        if(b[i]<=c[j])
        {
            a[k] = b[i];
            k++;
            i++;
        }
        else
        {
            a[k]=c[j];
            inv+=n1-i;
            k++;
            j++;
        }
    }

    while(i<n1)
    {
        a[k] = b[i];
        k++;
        i++;
    }

    while(j<n2)
    {
        a[k]=c[j];
        k++;
        j++;
    }
    return inv;
}

long long inversion(int a[],int low,int high)
{
    long long inv=0;
    if(low<high)
    {
        int mid=(low+high)/2;
       inv += inversion(a,low,mid);
       inv += inversion(a,mid+1,high);
       inv += merge(a,low,mid,high);
    }

    return inv;
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

    cout<<inversion(a,0,num-1);

    return 0;
}
