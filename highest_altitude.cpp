class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> prefsum;
        prefsum.push_back(0);
        for(int i = 0; i < gain.size(); i++)
            prefsum.push_back(prefsum[i] + gain[i]);
        int mx = *max_element(prefsum.begin(), prefsum.end());
        return mx;
    }
};