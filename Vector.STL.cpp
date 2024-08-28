#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>a={1,2,3,4,5,6};

    cout<<"Element : "<<a[0];
    cout<<endl;
    cout<<a[10];
    cout<<endl;

    cout<<"Element : "<<a.at(0)<<endl;  // at function can check bound check and will not give garbage value

    try
    {
        cout<<"Element : "<<a.at(10)<<endl; // Trying to access an out-of-bounds element
    }
    catch(const out_of_range& e)
    {
        cout<<"Out of range error: "<<e.what()<<endl;
    }

    cout<<"Element : "<<a.front()<<endl;
    cout<<"Element : "<<a.back()<<endl;

    a.at(1)=10;
    cout<<"Element :"<<a[1]<<endl;
}
