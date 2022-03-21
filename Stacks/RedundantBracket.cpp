#include<stack>
bool findRedundantBrackets(string &s)
{
    stack<char> st;
   	for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(' || s[i] == '+' || s[i] == '/' || s[i] == '*' || s[i] == '-')
            st.push(s[i]);
    if(s[i] == ')') {
        bool isRedundant = true;
        while(st.top() != '(') {
            if(st.top() == '+' || st.top() == '/' || st.top() == '*' || st.top() == '-') 
                isRedundant = false;
            st.pop();
        }
            if(isRedundant)
                return true;
            st.pop();
        }
       }
    return false;
} 