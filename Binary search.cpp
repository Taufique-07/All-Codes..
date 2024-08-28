#include<iostream>

using namespace std;

int search(int a[],int num,int key)
{
    int low=0,high=num-1;

    while(low<=high)
    {
        int mid =low+(high-low)/2;

        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int num;
    cout<< "Enter number : ";
    cin>>num;

    int a[num];

    cout<< "Enter a sorted array"<<endl;
    for(int i =0; i<num; i++)
    {
        cin>>a[i];
    }

    int key;
    cout<< "Enter the key : ";
    cin>>key;

   int result= search(a,num,key);

   if(result==-1)
   {
        cout<< "This number is not placed in this array."<<endl;
   }
   else
   {
        cout<< "It's in "<<result<< " index"<<endl;
        cout<<"It's in the "<<result+1<<" position"<<endl;
   }



}
