#include<iostream>

using namespace std;
int main()
{

    int n;

    cout<<"Enter a value :"<<endl;
    cin>>n;

    for (int i=1 ; i<=n-1 ; i++)
    {
        for (int j=n-1; j>=i ; j--)
          {
              cout<<" ";
          }
          for(int k=1 ; k<=i ; k++)
          {
              cout<<"* ";
          }
      cout<<endl;

    }

    for (int i=n; i>=1; i--)
    {
        for(int j=i; j<n ; j++)
            {
                cout<<" ";
            }
            for (int k=i; k>=1 ; k--)
            {
                cout<<"* ";
            }
        cout<<endl;
    }

    return 0;
}
