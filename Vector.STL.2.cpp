#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>a={1,2,3,4,5,6,7,8,9,0};
    vector<int>::iterator itr;
    itr=a.begin();

    while(itr != a.end())
    {
        if(*itr % 2 ==0)
        {
            a.erase(itr);
        }
        else
        {
            itr++;
        }
    }

    for(auto i: a)
        cout<<i<<" ";

       cout<<endl;
        vector<int>m={1,2,3,4,5};
        vector<int>n={11,22,33,44,55};

        m.swap(n);
        cout<<"This is M:";
        for(auto i:m)
            cout<<i<<" ";
        cout<<endl;

       // n.swap(m);
        cout<<"This is N:";
        for(auto i:n)
            cout<<i<<" ";
        cout<<endl;

    vector<int>v={9,5,8,0,6,4,2,3,1};
    sort(v.begin(),v.end());
    for(auto i: v)
        cout<<i<<" ";
    cout<<endl;


}
