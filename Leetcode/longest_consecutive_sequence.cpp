 int longestConsecutive(vector<int>& nums) {
         int count = 1;
    int mx = 0;
    set<int> st;
    vector<int> ans;
    if(nums.size() == 0)
        return 0;
    for(int i = 0; i < nums.size(); i++)
        st.insert(nums[i]);    
    for(auto it: st)
        ans.push_back(it);
    if(ans.size() == 1 || ans.size() == 0)
        return 1;
    for(int i = 0; i < ans.size() - 1; i++)
    {
        if(ans[i] + 1 == ans[i + 1])
            count++;
        else {
            mx = max(mx, count);
            count = 1;
        }
    }
    mx = max(count, mx);
        return mx;
    }