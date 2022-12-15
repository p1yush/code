class Solution {
public:
    int help1(int n, vector<int> &dp) {
        if(n <= 1)
            return n;
        if(dp[n] != -1)
            return dp[n];
        dp[n] = help1(n - 1, dp) + help1(n - 2, dp);
        return dp[n];
    }

    int help2(int n) {
        vector<int> dp(n + 2);
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }

    int help3(int n) {
        int prev1 = 0;
        int prev2 = 1;
        if(n == 0)
            return 0;
        for(int i = 2; i <= n; i++) {
            int curr = prev1 + prev2;
            prev1 = prev2;
            prev2 = curr;
        }
        return prev2;
    }
    int fib(int n) {
       // vector<int> dp(n + 1, -1);
       // return help1(n, dp);
       return help2(n);
       // return help3(n);
    }
};