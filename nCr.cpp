
#include<iostream>

using namespace std;

int fact(int num)
{
    int a = 1;

    for(int i = 2; i <= num; i++)
    {
        a*=i;
    }

    return a;

}

int main()
{
    int n,r;
    cin>>n>>r;

   int result = fact(n)/(fact(r)*fact(n-r));

   cout<<result<<endl;

    return 0;
}

