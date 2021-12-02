class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int ans = 0;
        vector<int> arr;
        for(int i = 0; i < points.size(); i++) 
            arr.push_back(points[i][0]);
        sort(arr.begin(), arr.end());
        for(int i = 0; i < arr.size() - 1; i++)
            if(ans < abs(arr[i] - arr[i + 1]))
                ans = abs(arr[i] - arr[i + 1]);
        return ans;
    }
};