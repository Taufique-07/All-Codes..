#include<iostream>

using namespace std;

int inversion(int a[],int num)
{
    int inv=0;
    for(int i=0; i<num; i++)
        for(int j=i+1;j<num;j++)
        if(a[i]>a[j])
            inv++;

    return inv;
}

int main()
{
    int num;
    cin>>num;

    int a[num];

    for(int i=0; i<num; i++)
        cin>>a[i];

    cout<<inversion(a,num)<<endl;
}
