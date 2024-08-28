#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> a;

    a.push_back(1); //push_back for inserting data;
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<< " ";
    }
    cout<<endl;

    vector<int>::iterator it;

    for(it=a.begin(); it!=a.end(); it++)
    {
        cout<<*it<< " ";
    }
    cout<<endl;

    for(auto element:a)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    a.pop_back();  // pop_back for deleting data from last;
    a.pop_back();

    for(auto element:a)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    vector<int>v (5,50);
    //50,50,50

    swap(a,v);

    for(auto element:a)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    sort(a.begin(),a.end());


    return 0;
}
