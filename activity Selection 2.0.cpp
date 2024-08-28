#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int num;
    cin>>num;

    vector<int> start(num),end(num);

    for(int i=0;i<num; i++)
    {
        cin>> start[i] >> end[i];
    }

    vector<pair<int,int>>act(num);
    for(int i=0; i<num; i++)
    {
        act[i] = {end[i],start[i]};
    }

    sort(act.begin(),act.end());

    int take=0;
    int last=0;

    for(auto& task : act)
    {
        if(task.second >= last)
        {
            take++;
            last = task.first;
        }
    }
    cout<<take<<endl;
}
