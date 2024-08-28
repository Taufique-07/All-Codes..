#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float num1, num2, result;
    char choice;
    cout<<"Enter Your Numbers:"<<endl;
    cin>> num1 >>num2;
    cout<<"Choose an operation:(+,-,*./)"<<endl;
    cout<<"+. Addition"<<endl;
    cout<<"-. Subtraction"<<endl;
    cout<<"*. Multiplication"<<endl;
    cout<<"/. Division"<<endl;
    cin>>choice;
    if (choice == '+') {
        result = num1 + num2;
        cout<<"Result: "<<result;
    } else if (choice == '-') {
        result = num1 - num2;
        cout<<"Result: "<<result;
    } else if (choice == '*') {
        result = num1 * num2;
        cout<<"Result: "<<result;
    } else if (choice == '/') {
        if (num2 != 0) {
            result = (float)num1 / num2;
            cout<<fixed;
            cout<<setprecision(2);
            cout<<"Result: "<< result;
        } else {
            cout<<"Error:Zero is not allowed."<<endl;
        }
    } else {
        cout<<"Invalid choice."<<endl;
    }
    return 0;
}

