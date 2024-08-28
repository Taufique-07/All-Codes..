#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double base,height,area;
    cout<<"Enter Base :";
    cin>>base;

    cout<<"Enter Height :";
    cin>>height;

    area = 1.0/2 * base * height;

    cout<<fixed;
    cout<<setprecision(2);
    cout<<"Area :"<<area;
}
