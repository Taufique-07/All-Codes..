#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int guess,ran;
    const int limit = 5;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I've selected a random number between 1 and 100.\n";
    cout << "You have " <<limit<< " attempts to guess the number.\n";

    ran=rand()%100+1;


    for(int i=limit; i>0; i--)
    {
        cout<<"Enter your Guess :"<<i<<" lives left"<<endl;
        cin>>guess;


        if(guess==ran)
        {
            cout << "Congratulations! You guessed the correct number. You win!\n";
            return 0;
        }
        else
        {
            cout<<"Try again"<<endl;
        }
    }
    cout << "Get your Brain work loser!!!!" << endl;
    cout<<"The number was "<<ran;
    return 0;
}
