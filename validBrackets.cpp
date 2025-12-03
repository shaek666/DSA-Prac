#include <bits/stdc++.h>
using namespace std;

bool isValidParentheses(const string& s) {
    stack<char> st;
    for(char c : s) {
        if(c == '(' || c == '{' || c == '['){
            st.push(c);
        } else {
            if(st.empty()) return false;
            char top = st.top();
            if((c == ')' && top == '(') ||
               (c == '}' && top == '{') ||
               (c == ']' && top == '[')) {
                st.pop();
            } else return false;
        }
    }
    return st.empty();
}

int main (void) {
    string a = "[3+{2-(5+1)}]";

    cout << (isValidParentheses(a) ? "YES" : "NO") << endl;

    
    
    return 0;

}