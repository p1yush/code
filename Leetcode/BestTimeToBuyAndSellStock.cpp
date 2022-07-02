   int maxProfit(vector<int>& prices) {
        int low = INT_MAX;
        int today = 0, mx = 0;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < low)
                low = prices[i];
            today = prices[i] - low;
            mx = max(mx, today);
        }
        return mx;
    }