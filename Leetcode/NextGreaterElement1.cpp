  vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        int n = nums1.size();
        int n2 = nums2.size();
        vector<int> nge(n2);
        vector<int> ans(n);
        for(int i = n2 - 1; i >= 0; i--) {
            while(!st.empty() && st.top() <= nums2[i])
                st.pop();
            if(st.empty())
                nge[i] = -1;
            else 
                nge[i] = st.top();
            st.push(nums2[i]);
        }
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n2; j++)
                if(nums1[i] == nums2[j]) {
                    ans[i] = nge[j];
                    continue;
                }
        return ans;
    }