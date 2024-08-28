#include<iostream>

using namespace std;

int main()
{
    int n,table;
    cout<<"Enter Your Number :";
    cin>>n;

    for(int i=1; i<=10; i++)
    {
        table=n*i;
        cout<<n <<"X"<<i<<"="<<table<<endl;
    }
}
