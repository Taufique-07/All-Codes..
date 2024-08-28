#include<iostream>

using namespace std;

class student
{
    string name;
    public:
     //data members
    int age;      //data members
    string gender;  //data members

    student()//default constractur
    {
        cout<< "Default constructor"<<endl;
    }

    student(string s,int a, string g)//Parameterised constructor
    {
        cout<< "Parameterised constructor"<<endl;
        name=s;
        age = a;
        gender=g;
    }

    student(student &a)//copy constructor
    {
        cout<< "Copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    void setName(string s)//setter function
    {
        name=s;
    }

    ~student()//destructor = destroy used data
    {
        cout<< "Destructor Called"<<endl;
    }

    void getName()
    {
        cout<<name<<endl;
    }

    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout<<endl;
    }

    bool operator == (student &a)//operator overload
    {
        if(name == a.name && age==a.age && gender == a.gender)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};


int main()
{
    //student b;
    //b.name = "Ronaldo";
    //b.age=21;
    //b.gender="male";
    //b.printInfo();

    student c("Real Madrid",122,"None");
    c.printInfo();
    student d;

    student e=c;

    if(e==c)
    {
        cout<<"Same"<<endl;
    }
    else
    {
        cout<<"Not Same"<<endl;
    }



   /* student a[3];
    for(int i=0; i<3; i++)
    {
        string s;
        cout<<"Name : ";
       // cin>>a[i].name;
        cin>>s;
        a[i].setName(s);
        cout<<"Age : ";
        cin>>a[i].age;
        cout<<"Gender : ";
        cin>>a[i].gender;
        cout<<endl;
    }

    for(int i=0; i<3; i++)
    {
        a[i].printInfo();
    } */
}
