#include<iostream>

using namespace std;

int main()
{
    int n,col,row;
    cin>>n;
    n = n-1;

    //upper loop

    for(row=n; row>=1; row--)
        {
        for(col=1; col<=row; col++) //for print #
            {
            cout<<"#";
        }
        for(col=1; col<=n-row+1; col++) // for space
        {
            cout<<"  ";
        }
        for(col=1; col<=row; col++)//print 2nd #
        {
            cout<<"#";
        }
        cout<<endl;  // to create new line
    }

    //lower loop

    for(row=1; row<=n; row++)
        {
        for(col=1; col<=row; col++) //to print lower loop #
            {
            cout<<"#";
        }
        for(col=1; col<=n-row+1; col++) // to print space in lower loop
        {
            cout<<"  ";
        }
        for(col=1; col<=row; col++)  //to print other side #
        {
            cout<<"#";
        }
        cout<<endl;
    }

return 0;
}
