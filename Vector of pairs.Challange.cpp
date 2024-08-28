#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<pair<int,int>>v;

    v={{1,2},{15,10},{5,-1}};

    vector<pair<int,int>>p={{1,2},{15,10},{5,-4}};

    auto sum=0;
    auto ans=0;

    for(auto i:v)
        sum+=i.second;

    cout<<"Sum of 2nd element : "<<sum<<endl;

    for(int i=0; i<p.size(); i++)
        ans+=p[i].second;

    cout<<"Sum of 2nd element : "<<ans<<endl;
}
