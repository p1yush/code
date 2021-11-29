class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int l = nums.size();
        sort(nums.begin(), nums.end());
        int x = (nums[l - 1] * nums[l -2]) - (nums[0] * nums[1]);
        return x;
    }
};