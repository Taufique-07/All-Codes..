#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{

    for(int i=0; i<=10; i++)
    {
        int ran = rand()%10;
        cout<<ran<<endl;
    }

}
