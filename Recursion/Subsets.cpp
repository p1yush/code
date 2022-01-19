class Solution {
private:
     void solution(vector<int> nums, vector<int> output, int index, vector<vector<int>>&ans) {
     if(index >= nums.size()) {
         ans.push_back(output);
         return;
     }
     solution(nums, output, index + 1, ans);
        
     int element = nums[index];
     output.push_back(element);
     solution(nums, output, index + 1, ans);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> ans;
        int index = 0;
        solution(nums, output, index, ans);
        return ans;
    }
};