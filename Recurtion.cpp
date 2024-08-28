#include<iostream>

using namespace std;

int rec(int a)
{
    if(a==1)
    {
        return 1;
    }
    else if(a==2)
    {
        return 2;
    }
    else
    {
        return a*rec(a-1);
    }
}
int main()
{
    int num;
    cin>>num;
    int result=rec(num);
    cout<<result;
}
