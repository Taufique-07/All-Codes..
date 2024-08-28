#include<iostream>

using namespace std;

class A
{
public:
    void func()
    {
        cout<<"Inherited."<<endl;
    }
};

class B : public A //single inheritance
{
};

class C
{
public:
    void play()
    {
        cout<<"Hala Madrid"<<endl;
    }
};

class D
{
public:
    void game()
    {
        cout<<"Y nada mas.\n"<<endl;
    }
};

class E : public C,public D // MUltiple inheritance
{

};

class F  // class to H is Multi level inheritance
{
public:
    void go()
    {
        cout<<"Go ";
    }
};

class G : public F  // class to H is Multi level inheritance
{
public:

    void hell()
    {
        cout<<"to Hell"<<endl;
    }
};

class H : public G // class to H is Multi level inheritance
{

};
int main()
{
    B b;
    b.func();

    E e;
    e.play();
    e.game();

    H h;
    h.go();
    h.hell();

}
