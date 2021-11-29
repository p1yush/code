class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int add = 0;
        vector<int> ar;
        for(int i = 0; i < rectangles.size(); i++) {
            int mn = min(rectangles[i][0], rectangles[i][1]);
            ar.push_back(mn);
        }
        int mx = *max_element(ar.begin(), ar.end());
        for(auto it: ar)
            if(it == mx)
                add++;
        return add;
    }
};