 int calPoints(vector<string>& ops) {
        int sum = 0;
        stack<int> st;
        for(int i = 0; i < ops.size(); i++) {
            if(ops[i] == "+") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a + b);
            }
            else if(ops[i] == "C")
                st.pop();
            else if(ops[i] == "D")
                st.push(2 * st.top());
            else 
                st.push(stoi(ops[i]));
        }
        while(!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }