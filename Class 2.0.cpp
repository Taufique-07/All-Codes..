
#include<iostream>
#include<string>

using namespace std;

class friends
{
public:
    int id;
    string name;
    double gpa;
};

int main()
{
    friends num;

    cout << "Enter ID: ";
    cin >> num.id;

    cout << "Enter Name: ";
    cin>>num.name;

    cout << "Enter GPA: ";
    cin >> num.gpa;

    cout << num.id << endl;
    cout << num.name << endl;
    cout << num.gpa << endl;

    return 0;
}
