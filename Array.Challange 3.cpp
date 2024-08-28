#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;

    int a[num];
    for(auto& i:a)
        cin>>i;

    int target;
    cin>>target;

    for(int i=0; i<num; i++)
    {
        if(a[i]+a[i+1]==target)
        {
            cout<<i<<" "<<i+1<<endl;
        }
    }

    cout<<"End of first round"<<endl;

    for(int i=0; i<num; i++)
    {
        for(int j=i+1;j<num; j++)
        {
            if((a[i]+a[j])==target)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }

    return 0;

}
