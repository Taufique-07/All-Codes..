#include<iostream>
#include<string>

using namespace std;

int main()
{
    string word = "lolita";
    string guess = "";
    int count = 0;
    int limit = 3;
    bool chance = false;

    cout << "Guess the word. (You have 3 lives)" << endl;

    while (guess != word && !chance)
    {
        if (count < limit)
        {
            system("cls");
            cout << "Enter a Guess: ";
            cin >> guess;
            count++;
        }
        else
        {
            chance = true;
        }
    }

    if (chance)
    {
        cout << "Get your Brain work loser!!!!" << endl;
    }
    else
    {
        cout << "You Win!!!" << endl;
    }

    return 0;
}
