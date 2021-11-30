class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> a;
        a = heights;
        sort(a.begin(), a.end());
        for(int i = 0; i < heights.size(); i++)
            if(a[i] != heights[i])
                count++;
        return count;
    }
};