int maxArea(vector<int>& height) {
        int mx = 0;
        int ans;
        int i = 0, j = height.size() - 1;
        while(j >= i) {
            if(height[i] <= height[j]) {
                ans = height[i] * (j - i);
                i++;
            }
            else {
                ans = height[j] * (j - i);
                j--;
            }
            mx = max(ans, mx);
        }
        return mx;
    }