class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size() - 1; i++)
            if(nums[i] >= nums[i + 1]) {
                int x = nums[i + 1];
                nums[i + 1] = nums[i] + 1;
                count += nums[i + 1] - x;
            }
        return count;
    }
};