#include<iostream>

using namespace std;

void replace(string word)
{
    if(word.length()==0)
        return;

    if(word[0]=='p' && word[1]=='i')
       {
           cout<<"3.14";
           replace(word.substr(2));
       }
    else
    {
        cout<<word[0];
        replace(word.substr(1));
    }

}

int main()
{
    string word;
    cin>>word;
    replace(word);

}
