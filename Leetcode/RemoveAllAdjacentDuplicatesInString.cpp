 string removeDuplicates(string s) {
        string ans = "";
        stack<int> st;
        for(int i = s.size() - 1; i >= 0; i--) {
            if(st.empty())
                st.push(s[i]);
            else {
                if(st.top() == s[i])
                    st.pop();
                else 
                    st.push(s[i]);
            }
        }
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }