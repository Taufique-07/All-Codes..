#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>a={1,2,3,4,5,6,7};
    vector<int>:: iterator x;

    for(x=a.begin(); x!=a.end(); x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;

    vector<int> :: reverse_iterator y;
     for(y=a.rbegin(); y!=a.rend(); y++)
     {
         cout<<*y<<" ";
     }

     cout<<endl;

     vector<char>v={'a','b','c','d','e'};
     cout<<"Size of V :"<<v.size()<<endl;
     cout<<"Max Size of V :"<<v.max_size()<<endl;
     cout<<"Capacity of V :"<<v.capacity()<<endl;
     v.push_back('f');
     cout<<"Size of V :"<<v.size()<<endl;
     cout<<"Max Size of V :"<<v.max_size()<<endl;
     cout<<"Capacity of V :"<<v.capacity()<<endl;

     v.resize(4);
     for(auto i:v)
        cout<<i<<" ";

     cout<<endl;

     vector<int>m={1,2,3,4,5,6,7,8,9};
     m.resize(10);

     for(int i=0; i<m.size(); i++)
     {
         cout<<m.at(i)<<" ";
     }

     cout<<endl;
     cout<<"Size of Vector :"<<m.size()<<endl;
     cout<<"Capacity of Vector  :"<<m.capacity()<<endl;

     cout<<"Status of Vector : "<<(m.empty()? "Yes" : "No")<<endl;

     m.reserve(20);
     cout<<"Size of Vector :"<<m.size()<<endl;
     cout<<"Capacity of Vector  :"<<m.capacity()<<endl;

     m.shrink_to_fit();
     cout<<"Size of Vector :"<<m.size()<<endl;
     cout<<"Capacity of Vector  :"<<m.capacity()<<endl;

     m.pop_back();
     for(auto i: m)
        cout<<i<<" ";

    cout<<endl;
    m.assign(11,-1);
    for(auto i: m)
        cout<<i<<" ";

    cout<<endl;

    vector<int>z;

    vector<int> n = {1, 2, 3, 4,5,6,7,8,9,10,11,22,33};
    z.assign(n.begin(), n.end());  // Replaces the contents of `m` with the values from `n`.
    cout<<"After assigning : ";
    for(auto i: z)
        cout<<i<<" ";
    cout<<endl;

    vector<int>::iterator p;
    p=z.begin()+1;

    cout<<"After inserting : ";
    z.insert(p,77);
    for(auto i: z)
        cout<<i<<" ";
    cout<<endl;

    z.insert(z.begin()+3,0);
    for(auto i: z)
        cout<<i<<" ";

    cout<<endl;

    z.insert(z.end()-1,0);
    for(auto i: z)
        cout<<i<<" ";
    cout<<endl;

    z.clear();
    cout<<"After Clearing :";
    for(auto i:z)
        cout<<i<<" ";
    cout<<endl;

    cout<<"Before erasing :";
    for(auto i:n)
        cout<<i<<" ";
    cout<<endl;

    n.erase(n.begin()+2);
    cout<<"After erasing :";
    for(auto i:n)
        cout<<i<<" ";
    cout<<endl;

    n.erase(n.begin(),n.begin()+2);
    cout<<"After erasing :";
    for(auto i:n)
        cout<<i<<" ";
    cout<<endl;

    n.erase(n.end()-2);
    cout<<"After erasing :";
    for(auto i:n)
        cout<<i<<" ";
    cout<<endl;

    iter_swap(n.begin(),n.end()-1);
    cout<<"After swaping :";
    for(auto i:n)
        cout<<i<<" ";
    cout<<endl;

    n.push_back(9);
    n.push_back(0);
    n.push_back(7);

    n.emplace(n.begin()+3,10);
    cout<<"After emplacing :";
    for(auto i:n)
        cout<<i<<" ";
    cout<<endl;

    n.emplace(n.end()-3,10);
    cout<<"After emplacing :";
    for(auto i:n)
        cout<<i<<" ";
    cout<<endl;

    n.emplace_back(0);
    cout<<"After emplacing :";
    for(auto i:n)
        cout<<i<<" ";
    cout<<endl;


}

