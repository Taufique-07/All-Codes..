#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>a;
    pair<int,string>b;

    vector<pair<int,string>>c={{1,"Rapi"},{2,"Moon"}};

    for(auto i:c)
    cout<<i.first<<" "<<i.second<<endl;;
    cout<<endl;

    for(int i=0; i<c.size(); i++)
      {
         cout<<c[i].first<<" "<<c[i].second<<endl;
      }
      cout<<endl;
    c.push_back({3,"Choya"});
    for(int i=0; i<c.size(); i++)
      {
         cout<<c.at(i).first<<" "<<c.at(i).second<<endl;
      }
      cout<<endl;
    c.push_back(make_pair(4,"Aysha"));
    for(auto i:c)
        cout<<i.first<<" "<<i.second<<endl;
    cout<<endl;

    c.erase(c.begin()+2);
    for(auto i:c)
        cout<<i.first<<" "<<i.second<<endl;
    cout<<endl;


}
