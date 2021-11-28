class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mp;
        int x;
        for(int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;
        for(auto it: mp) {
            if(it.second > 1)
                x = it.first;
        }
        return x;
    }
};