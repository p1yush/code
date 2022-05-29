string simplifyPath(string path) {
        stack<string> st;
        string temp, ans;
        stringstream s(path);
        while(getline(s, temp, '/')) {
            if(temp == "." || temp == "")
                continue;
            if(temp != "..")
                st.push(temp);
            else if(!st.empty())
                st.pop();
        }
        if(st.empty())
            return "/";
        while(!st.empty()) {
            ans = '/' + st.top() + ans;
            st.pop();
        }
        return ans;
    }