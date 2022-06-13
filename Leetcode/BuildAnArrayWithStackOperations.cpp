vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int x = 0;
        for(int i = 1; i <= n; i++) {
            if(x == target.size())
                return ans;
            if(target[x] == i) {
                ans.push_back("Push");
                x++;
            }
            else {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }