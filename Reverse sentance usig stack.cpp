#include<iostream>
#include<stack>

using namespace std;

void reverse(string s)
{
    stack<string> a;

    int size=s.length();

    for(int i=0; i<size;i++)  
    {
        string word = "";
        while(s[i] != ' ' && i < size){  
            word += s[i];
            i++;
        }
        a.push(word);
    }
    while(!a.empty()){
        cout << a.top() <<" ";
        a.pop();
    }
    cout << endl;
}

int main()
{
    string s = "Hala Madrid! Y Nada Mas!";
    reverse(s);
    return 0;
}
