#include<iostream>
#include<string>

using namespace std;

int main()
{
    string st;
    string str2;


    getline(cin,str2);
    cout<<str2<<endl;

    cin>>st;
    cout<<st<<endl;

    string s1="Hala Madrid! ";
    string s2="Y Nada Mas";

    s1.append(s2);
    cout<<s1<<endl;
    cout<<s1+s2<<endl;
    s2.clear();
    cout<<s1+s2<<endl;

        string str[5];
    for(int i=0; i<5; i++)
        str[i]="Ron";
    for(int i=0; i<5; i++)
        cout<<str[i]<<endl;
}

