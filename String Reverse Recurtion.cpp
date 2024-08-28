#include<iostream>
#include<string>

using namespace std;

void reverse(string word)
{
    if(word.length()==0)
        return;

    string ros =word.substr(1);
    reverse(ros);
    cout<<word[0];
}
int main()
{
    string word;
    cin>>word;

    reverse(word);
}
