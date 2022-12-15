class Solution {
public:
    int help1(int n, vector<int> &dp) {
        if(n <= 1)
            return n;
        if(n == 2)
            return 1;
        if(dp[n] != -1)
            return dp[n];
        dp[n] = help1(n - 1, dp) + help1(n - 2, dp) + help1(n - 3, dp);
        return dp[n];
    }

    int help2(int n) {
        vector<int> dp(n + 3);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        for(int i = 3; i <= n; i++)
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        return dp[n];
    }
    int help3(int n) {
        int prev1 = 0;
        int prev2 = 1;
        int prev3 = 1;
        if(n == 0)
            return 0;
        for(int i = 3; i <= n; i++) {
            int curr = prev1 + prev2 + prev3;
            prev1 = prev2;
            prev2 = prev3;
            prev3 = curr;
        }
        return prev3;
    }
    int tribonacci(int n) {
       // vector<int> dp(n + 1, -1);
       // return help1(n, dp);
       // return help2(n);
        return help3(n);
    }
};