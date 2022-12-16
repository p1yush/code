class Solution {
public:
    int help1(int n, vector<int> cost, vector<int> &dp) {
        if(n == 0)
            return cost[0];
        if(n == 1)
            return cost[1];
        if(dp[n] != -1)
            return dp[n];
        dp[n] = cost[n] + min(help1(n - 1, cost, dp), help1(n - 2, cost, dp));
        return dp[n];
    }

    int help2(int n, vector<int> cost) {
        vector<int> dp(n + 1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i = 2; i < n; i++)
            dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
        return min(dp[n - 1], dp[n - 2]);
    }

    int help3(int n, vector<int> cost) {
        int prev1 = cost[0], prev2 = cost[1];
        for(int i = 2; i < n; i++) {
            int curr = cost[i] + min(prev2, prev1);
            prev1 = prev2;
            prev2 = curr;
        }
        return min(prev1, prev2);
    }

    int minCostClimbingStairs(vector<int>& cost) {
       int n = cost.size();
       // vector<int> dp(n + 1, -1);
       // return min(help1(n - 1, cost, dp), help1(n - 2, cost, dp));
       // return help2(n, cost);
       return help3(n, cost);
    }
};