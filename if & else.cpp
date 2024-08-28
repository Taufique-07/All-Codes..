#include<iostream>

using namespace std;

int main()
{
    int savings;
    cin>>savings;


    if(savings>5000)
    {
        if(savings>10000)
        {
            cout<< "Road Trip with Neha" <<endl;
        }

        else
        {
            cout<< "Shopping with Neha" <<endl;
        }
    }
    else if(savings>2000)
    {
        cout<<"Reshmi"<<endl;
    }
    else
    {
        cout<<"Friends"<<endl;
    }

    return 0;
}
