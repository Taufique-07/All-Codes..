#include<iostream>

using namespace std;

bool sorted(int a[],int num)
{
    if(num==1)
        return true;

    bool array = sorted(a+1,num-1);
    return (a[0] <= a[1] && array);
}

int main()
{
    int num;
    cin>>num;

    int a[num];

    for(int i=0; i<num; i++)
        cin>>a[i];

    int check=sorted(a,num);

    cout<<(check ? "Sorted" : "Unsorted")m<<endl;
}
