int maxArea(vector<int>& height) {
    int i = 0, j = height.size() - 1;
    int mx = 0;
    int area;
    while(i < j) {
        if(height[i] <= height[j]) {
                area = height[i] * (j - i);
                i++;
        }
        else {
            area = height[j] * (j - i);
            j--;
        }
        mx = max(mx, area);
    }
    return mx;
}