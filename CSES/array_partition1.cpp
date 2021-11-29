class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0,j = 1; i < nums.size(); i = i + 2, j = j + 2)
            count += min(nums[i], nums[j]);
        return count;
    }
};