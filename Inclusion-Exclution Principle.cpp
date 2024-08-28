#include<iostream>

using namespace std;

int div(int num, int a, int b)
{
    int p=num/a;
    int q=num/b;
    int r=num/(a*b);

    return p+q-r;
}

int main()
{
    int num,b,c;
    cin>>num>>b>>c;

    cout<<div(num,b,c)<<endl;

    return 0;
}
