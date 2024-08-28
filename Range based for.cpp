#include<iostream>
#include<string>

using namespace std;

int main()
{
    int num;
    cin>>num;

    int a[num];


    for(auto& i : a)
        cin>>i;

    for(auto b : a)
        cout<<b<<endl;

    cin.ignore();//ignore the leftover new line

    string name;
    getline(cin,name);
    for(auto c:name)
    {
        cout<<c;
    }

    return 0;
}
