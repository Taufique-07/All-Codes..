#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int num;
    cin>>num;

    vector<vector<int>>v;
    for(int i=0; i<num; i++)
    {
        int start,end;
        cin>>start>>end;
       v.push_back({start,end});
    }
    sort(v.begin(),v.end(),[&](vector<int>&a,vector<int>&b)
    {
        return a[1]<b[1];
    });

    int take=1;
    int end=v[0][1];

    for(int i=1; i<num; i++)
    {
        if(v[i][0]>=end)
        {
            take++;
            end=v[i][1];
        }
    }
    cout<<take<<endl;
}
