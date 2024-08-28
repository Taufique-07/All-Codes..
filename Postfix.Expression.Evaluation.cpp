#include<iostream>
#include<stack>
#include<cmath>

using namespace std;

int postfix(string s)
{
    stack <int> st;

int size= s.length();

    for(int i=0 ;i<size; i++){

        if(s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();

            switch(s[i])
            {
               case '+':
               st.push(op2+op1) ;
               break;

               case '-':
               st.push(op2-op1) ;
               break;

               case '*':
               st.push(op2*op1) ;
               break;

               case '/':
               st.push(op2/op1) ;
               break;

               case '^':
               st.push(pow(op2,op1)) ;
               break;
            }
        }
    }
    return st.top();
}

int main()
{
    string s="74*5+20+";
    cout<<postfix(s);
    return 0;
}
