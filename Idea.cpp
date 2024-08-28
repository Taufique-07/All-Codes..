#include<iostream>
#include<iomanip>
#include<ctime>
#include<stdlib.h>

using namespace std;

int randEven()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    return (rand() % 50 + 1) * 2;
}

int main()
{
    int ran = randEven();
    int num;
    cout << "Welcome to Mind game" << endl;
    cout << "Enter a number and follow the instructions." << endl;
    cin >> num;

    cout << "Now add " << ran << " with your number" << endl;
    cout << "After adding, divide the total by 2 and remember it" << endl;
    cout << "Now subtract your number from it." << endl;

    cout << "Type yes if you are done." << endl;
    string d;

    float a = num + ran;
    float b = a / 2;
    float c = b - num;
    cin >> d;

    if (d == "yes" || d == "Yes")
    {
        cout << "Your Result is " << c << endl;
    }
    else
    {
        cout << "Try again." << endl;
    }

    return 0;
}
