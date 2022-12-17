class Solution {
public:
    int help1(vector<int> nums, vector<int> freq, vector<int> dp, int n) {
        if(n < 0)
            return 0;
        if(n == 0)
            return 0;
        if(dp[n] != -1)
            return dp[n];
        int first = help1(nums, freq, dp, n - 2) + (freq[n] * n);
        int second = help1(nums, freq, dp, n - 1);
        dp[n] = max(first, second);
        return dp[n];
    }

    int help2(vector<int> freq, int n) {
        vector<int> dp(n + 2);
        dp[0] = 0;
        for(int i = 1; i <= n; i++) {
            int first = i * freq[i];
            if(i > 1)
                first += dp[i - 2];
            int second = dp[i - 1];
            dp[i] = max(first, second);
        }
        return dp[n];
    }

    int help3(vector<int> freq, int n) {
        int prev1 = 0, prev2 = 0;
        for(int i = 0; i <= n; i++) {
            int first = prev1 + (i * freq[i]);
            int second = prev2;
            int curr = max(first, second);
            prev1 = prev2;
            prev2 = curr;
        }
        return prev2;
    }
    int deleteAndEarn(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        vector<int> freq(mx + 1);
       // vector<int> dp(mx + 1, -1);
        for(int i = 0; i < nums.size(); i++)
            freq[nums[i]]++;
       // return help1(nums, freq, dp, mx);
       // return help2(freq, mx);
        return help3(freq, mx);
    }
};