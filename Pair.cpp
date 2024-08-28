#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compire(pair<int,int>p1,pair<int,int>p2)
{
    return p1.first<p2.first;
}

int main()
{
    int num;
    cin>>num;

    int a[num];//

    int b[]={10,16,7,14,5,3,12,9};

    for(int i=0; i<num; i++)
    {
        cin>>a[i];
    }

    vector<pair<int ,int>>v;
    vector<pair<int ,int>>q;

    for(int i=0; i<num; i++)  //for(int i=0; i<sizeof(a)/sizeof(a[0]) its for given array size
    {
        pair<int ,int>p;
        p.first=a[i];
        p.second=i;
        v.push_back(p);
    }

    for(int i=0; i<sizeof(b)/sizeof(b[i]); i++)
    {
        q.push_back(make_pair(b[i],i));
    }

    sort(v.begin(),v.end(),compire);
    sort(q.begin(),q.end(),compire);

    for(int i=0; i<v.size();i++)
    {
        a[v[i].second]=i;
    }

    for(int i=0; i<v.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<q.size();i++)
    {
        b[q[i].second]=i;
    }

    for(int i=0; i<q.size(); i++)
    {
        cout<<b[i]<<" ";//reduced order
    }
    cout<<endl;

    return 0;

}
