#include<iostream>
using namespace std;

int main()
{
    int num,reverse;
    cin>>num;

    while(num>0)
    {
        int last = num%10;
        reverse = reverse*10 + last;
        num/=10;
    }

    cout<<reverse<<endl;
}
