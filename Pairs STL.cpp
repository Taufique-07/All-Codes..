#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main()
{
    pair<int,float>p(2,2.5);
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<int,string>q;

    q=make_pair(30,"Ronaldo");
    cout<<q.first<<endl;
    cout<<q.second<<endl;

    auto r=make_pair("Madrid","UCL");
    cout<<r.first<<endl;
    cout<<r.second<<endl;

    pair<int,float>s(p);
    cout<<s.first<<endl;
    cout<<s.second<<endl;

    pair<int,float>t;
    t.first=8;
    t.second=3.1416;

    pair<bool,string>m;
    m.first=false;
    m.second="Hala Madrid";
    cout<<m.first<<endl;
    cout<<m.second<<endl;

    p.swap(t);
    cout<<"P after swap :";
    cout<<p.first<<" ";
    cout<<p.second<<endl;

    cout<<"Q after swap :";
    cout<<t.first<<" ";
    cout<<t.second<<endl;

    cout<<(p==s)<<endl;
    cout<<(p==t)<<endl;

}
