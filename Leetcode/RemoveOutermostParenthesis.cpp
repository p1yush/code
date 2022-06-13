 string removeOuterParentheses(string s) {
        string p = "";
        stack<char> st;
        int x = 1;
        st.push(s[0]);
        for(int i = 1;i < s.length(); i++) {
            if(s[i] == '(')
                st.push(s[i]);
            else 
                st.pop();
            if(st.empty()) {
                while(x < i) {
                    p += s[x];
                    x++;
                }
                x = i + 2;
            }
        }
        return p;
    }