
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
    int num;
    cin>>num;

   int result = fact(num);

   cout<<result<<endl;

    return 0;
}
