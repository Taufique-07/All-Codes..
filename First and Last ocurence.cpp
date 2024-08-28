#include<iostream>

using namespace std;

int first(int a[], int num, int index,int key)
{

    if(index==num)
        return -1;

    if(a[index]==key)
        return index;

    return first(a,num,index+1,key);
}

int last(int a[], int num, int index,int key)
{
    if(index==num)
        return -1;
    int array = last(a,num,index+1,key);
    if(array!=-1)
        return array;

    if(a[index]==key)
        return index;

    return -1;
}

int main()
{

    int num;
    cin>>num;

    int a[num];

    for(int i=0; i<num; i++)
        cin>>a[i];
    int key;
    cin>>key;

    cout<<first(a,num,0,key)<<endl;
    cout<<last(a,num,0,key)<<endl;
}
