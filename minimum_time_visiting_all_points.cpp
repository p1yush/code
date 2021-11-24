class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int x, y, mx = 0;
        for(int i = 0; i < points.size() - 1; i++) {
                x = abs(points[i][0] - points[i + 1][0]);
                y = abs(points[i][1] - points[i + 1][1]);
                mx += max(x, y);
            }
        return mx;
    }
};