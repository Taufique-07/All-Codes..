#include<iostream>
#include<stack>

using namespace std;

void bottom(stack<int> &st,int element){
    
    if(st.empty()){
        st.push(element);
        return;
    }

    int topelement=st.top();
    st.pop();
    bottom(st,element);

    st.push(topelement);
}

void reverse(stack<int> &st)
{
    if (st.empty()){
        return;
    }
    int element=st.top();
    st.pop();
    reverse(st);

    bottom(st,element);
}

int main()
{
    stack <int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    stack <int> st2=st;

    while (!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }cout<<endl;
    
    reverse(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    

}