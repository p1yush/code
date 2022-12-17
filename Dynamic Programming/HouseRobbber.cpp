class Solution {
public:
    int help1(int n, vector<int> nums, vector<int> &dp) {
        if(n < 0)
            return 0;
        if(n == 0)
            return nums[0];
        if(dp[n] != -1)
            return dp[n];
        int first = help1(n - 2, nums, dp) + nums[n];
        int second = help1(n - 1, nums, dp);
        dp[n] = max(first, second);
        return dp[n];
    }

    int help2(int n, vector<int> nums) {
        vector<int> dp(n);
        dp[0] = nums[0];
        for(int i = 1; i < n; i++) {
            int first = nums[i];
            if(i > 1)
                first += dp[i - 2];
            int second = dp[i - 1];
            dp[i] = max(first, second);
        }
        return dp[n - 1];
    }

    int help3(int n, vector<int> nums) {
        int prev1 = 0;
        int prev2 = nums[0];
        for(int i = 1; i < n; i++) {
            int first = prev1 + nums[i];
            int second = prev2;
            int curr = max(first, second);
            prev1 = prev2;
            prev2 = curr;
        }
        return prev2;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
       // vector<int> dp(n + 1, -1);
       // return help1(n - 1, nums, dp);
       // return help2(n, nums);
       return help3(n, nums);
    }
};