#include<iostream>
#include<algorithm>
#include<climits>

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

    int sum=0;
    int highest=INT_MIN;

    for(int i=0; i<num; i++)
    {
        sum+=a[i];
        if(sum<0)
            sum=0;
        if(sum>highest)
             highest=sum;
    }

    cout<<highest<<endl;
}
