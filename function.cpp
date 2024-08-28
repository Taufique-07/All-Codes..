#include<iostream>

using namespace std;


int linear_search(int a[],int n, int x)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;

}



int main()
{
    int number;
    cin>>number;
    int arr[number],num;
    for(int i =0 ; i<number; i++)
    {
       cin>>arr[i];
    }
    cin>>num;

    int rslt=linear_search(arr,number,num);
    cout<<rslt;
    return 0;
}

