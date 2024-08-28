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

    int counter=1;

    while(counter <num)
    {
        for(int i=0; i<num-counter; i++)
        {
            if(a[i]>a[i+1])
            {
               int temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
            }
        }
        counter++;
    }

    for(int i=0; i<num; i++)
    {
        cout<<a[i] << " ";
    }
    cout<<endl;

    return 0;

}
