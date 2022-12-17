class Solution {
public:
     int help3(vector<int> nums) {
        int n = nums.size();
        int prev1 = 0;
        int prev2 = nums[0];
        for(int i = 1; i < n; i++) {
            int first = prev1 + nums[i];
            int second = prev2;
            int curr = max(first, second);
            prev1 = prev2;
            prev2 = curr;
        }
        return prev2;
    }

    int rob(vector<int>& nums) {
        vector<int> temp1, temp2;
        if(nums.size() == 1)
            return nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if(i != 0)
                temp1.push_back(nums[i]);
            if(i != nums.size() - 1)
                temp2.push_back(nums[i]);
        }
        return max(help3(temp1), help3(temp2));
    }
};