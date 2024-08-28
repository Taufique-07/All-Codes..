#include<iostream>

using namespace std;

void fib(int num)
{
    int a = 0;
    int b = 1;
    int temp;

    for(int i = 1; i <= num; i++)
    {
        cout<<a<<endl;
        temp = a+b;
        a = b;
        b = temp;
    }
}

int main()
{
    int num;
    cin>>num;

    fib(num);

    return 0;
}
