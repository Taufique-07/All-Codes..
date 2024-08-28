#include<iostream>

using namespace std;

//1 3 2 3 4 1 6 4 3

void countSort(int a[], int num)
{
    int k=a[0];
    for(int i=0; i<num; i++)
    {
        k=max(k,a[i]);
    }

    int count[10]={0};
    for(int i=0; i<num; i++)
    {
        count[a[i]]++;
    }

     for(int i=1; i<=k; i++)
     {
         count[i]+=count[i-1];
     }

     int output[num];
     for(int i=num-1; i>=0; i--)
     {
         output[--count[a[i]]]=a[i];
     }

      for(int i=0; i<num; i++)
      {
          a[i]=output[i];
      }

}

 int main()
 {

     int num;
     cin>>num;

     int a[num];
     int b[]={1,3,2,3,4,1,6,4,3};

     for(int i=0; i<num; i++)
     {
         cin>>a[i];
     }

     int size = sizeof(b)/sizeof(0);

     countSort(a,num);
     countSort(b,size);

     for(int i=0; i<num; i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<endl;

     for(int i=0; i<size; i++)
     {
         cout<<b[i]<< " ";
     }
     cout<<endl;

     return 0;
 }
