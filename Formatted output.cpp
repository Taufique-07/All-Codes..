#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 values :";
    cin>>a >>b;


    cout<<showpoint;
    float sum = a+b;
    cout<<setw(10)<<"Sum :"<<sum<<endl;

    cout<<noshowpoint;
    int sub = a-b;
    cout<<setw(10)<<"Sub :"<<sub<<endl;

    int mult = a*b;
    cout<<setw(10)<<"Mult :"<<mult<<endl;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    float div =(float)a/b;
    cout<<setw(10)<<"Div :"<<div<<endl;

    cout<<showpoint;
    int rem=a%b;
    cout<<setw(10)<<"Rem :"<<rem<<endl;

    return 0;
}
