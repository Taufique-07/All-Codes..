#include<iostream>

using namespace std;

class base
{
public:
   virtual void output()
    {
        cout<< "Base class Print by Output."<<endl;
    }

    void print()
    {
        cout<< "Base class Print By print."<<endl;
    }
};

class derived : public base
{
public:
    void output()
    {
        cout<< "Derived class Print by Output."<<endl;
    }

    void print()
    {
        cout<< "Derived class Print By print."<<endl;
    }
};

class Complex  ////operator polymorphisom
{
    int real,img;
public :

    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }

    Complex operator + (Complex const &obj)
    {
        Complex res;
        res.img=img + obj.img;
        res.real= real + obj.real;
        return res;
    }

    void display()
    {
        cout<< real << " + i"<<img<<endl;
    }
};

class a   //function overloding
{
    public :
    void fun()
    {
        cout<< "No Arguments Function.";
        cout<<endl;
    }

    void fun(int x)
    {
        cout<< "Int Arguments Function.";
        cout<<endl;
    }

    void fun(double x)
    {
        cout<< "Double Arguments Function.";
        cout<<endl;
    }
};

int main()
{
    a c;
    c.fun();
    c.fun(4);
    c.fun(4.3);

    Complex c1(12,7),c2(6,7);
    Complex c3=c1+c2;
    cout<<endl;
    c3.display();

    base *p;
    derived d;

    p=&d;

    p->output();
    p->print();

}
