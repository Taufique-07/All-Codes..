#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double C,F;
    cout<<"Ernter Cenlious :";
    cin>>C;

    F=(float)9/5*C+32;
    cout<<fixed;
    cout<<setprecision(2);
    cout<<"Ferenheit is :"<<F;

    return 0;
}
