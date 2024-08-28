#include<iostream>


using namespace std;

class student
{
    public :
    int id;
    double gpa;
};

int main()
{
    student alim;
    alim.id=101;
    alim.gpa=3.56;

    cout<<alim.id<<endl;
    cout<<alim.gpa<<endl;
}
