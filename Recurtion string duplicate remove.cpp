#include<iostream>

using namespace std;

string duplicate(string word)
{
    if(word.length()==0)
        return "";

    char ch=word[0];
    string ans = duplicate(word.substr(1));

    if(ch==ans[0])
        return ans;

    return (ch+ans);

}

int main()
{
    string word;
    cin>>word;
    cout<<duplicate(word)<<endl;
}
