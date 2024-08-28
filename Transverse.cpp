#include<iostream>

using namespace std;
int main()
{
    int a[100],siz,num,pos;

    cout<<"Enter size"<<endl;
    cin>>siz;
    cout<<"Enter num and pos"<<endl;
    cin>>num>>pos;
    cout<<endl;
    for (int i = 0; i<siz; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<siz; i++)
    {
        cout<<a[i]<<endl;
    }
  /*  for(int i=size -1; i>pos-1; i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;*/
    return 0;
}
