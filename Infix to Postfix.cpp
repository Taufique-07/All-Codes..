#include<iostream>
#include<stack>
#include<string>

using namespace std;

int precedence(char c) {
    if (c == '^') {
        return 3;
    } 
    else if (c == '*' || c == '/') {
        return 2;
    } 
    else if (c == '+' || c == '-') {
        return 1;
    } 
    else {
        return -1;
    }
}

string convert(string s) {
    stack<char> st;
    string result;
    int size = s.length();

    for (int i = 0; i < size; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            result += s[i];
        } else if (s[i] == '(') {
            st.push(s[i]);
        } else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop();
            }
        } 
        else {
            while (!st.empty() && precedence(st.top()) >= precedence(s[i])) {
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    return result;
}

int main() {
    string s = "(a-b/c)*(a/k-l)";
    cout << convert(s) << endl;
    return 0;
}
