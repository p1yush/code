class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> x;
        for(int i = 0; i < nums.size(); i = i + 2)
            for(int j = 0; j < nums[i]; j++)
                x.push_back(nums[i + 1]);
        return x;
    }
};