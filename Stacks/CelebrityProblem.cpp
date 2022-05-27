int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> st;
        for(int i = 0; i < n; i++)
            st.push(i);
        while(st.size() != 1) {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(M[a][b] == 0)
                st.push(a);
            else 
                st.push(b);
        }
        int ans = st.top();
        int zeroCount = 0;
        for(int i = 0; i < n; i++) 
            if(M[ans][i] == 0)
                zeroCount++;
        if(zeroCount != n)
            return -1;
        int oneCount = 0;
        for(int i = 0; i < n; i++) 
            if(M[i][ans] == 1)
                oneCount++;
        if(oneCount != n - 1)
            return -1;
        return ans;
    }