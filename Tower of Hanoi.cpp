#include<iostream>

using namespace std;

void tower(int num,char src,char dst,char help)
{
    if(num==0)
        return;

    tower(num-1,src,help,dst);
    cout<<"Move from "<<src<<" to "<<dst<<endl;
    tower(num-1,help,dst,src);
}

int main()
{
    int num;
    cin>>num;
    tower(num,'A','C','B');
}
