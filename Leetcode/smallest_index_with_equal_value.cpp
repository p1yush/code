class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        vector<int> arr;
        for(int i = 0; i < nums.size(); i++)
            if(i % 10 == nums[i])
                arr.push_back(i);
        if(arr.empty())
            return -1;
        else
            return arr[0];
    }
};