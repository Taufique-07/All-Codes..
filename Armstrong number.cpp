#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,reverse;
    cin>>num;

    int sum = 0;
    int n = num;

    while(num>0)
    {
        int last = num%10;
        sum += pow(last,3);
        num/=10;
    }

    if(sum == n)
    {
        cout<< "Armstrong Number"<< endl;
    }

    else
    {
        cout<< "Not Armstrong Number" <<endl;
    }

    return 0;
}

