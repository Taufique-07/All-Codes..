#include<iostream>
#include<vector>

using namespace std;   //STL - standard template library

int main()
{
    int num;
    cin>>num;
    vector<int>a;
    vector<int>b(num);
    vector<string>c(5,"rafi");
    vector<int>d(10,0);
    vector<int>e = {1,2,3,4,5,6,7,8,9,0};
    vector<int>f(e.begin(),e.end());

    fill(b.begin(),b.end(),1);

    int value;

    for(int i=0; i<num; i++)
    {
        cout<<"Enter value : ";
        cin>>value;
        a.push_back(value);
    }

    for(auto i : a)
        cout<<i<<" ";

        cout<<endl;

    cout<<"size : "<<a.size()<<endl;
    cout<<"Capasity :"<<a.capacity()<<endl;

    for(auto i : c)
        cout<<i<<" ";
    cout<<endl;

    for(auto i : d)
        cout<<i<<" ";
    cout<<endl;

    cout<<"B : ";
    for(auto i : b)
        cout<<i<<" ";
    cout<<endl;

    for(auto i : e)
        cout<<i<<" ";
    cout<<endl;

    for(int i=e.size()-1; i>=0; i--)
        cout<<e[i]<<" ";
    cout<<endl;

    for(auto j:e)
        cout<<j<<" ";
}
