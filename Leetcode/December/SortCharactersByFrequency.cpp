class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int, char>> hash(126, {0, 0});
        for(int i = 0; i < s.size(); i++) 
            hash[s[i]] = {hash[s[i]].first + 1, s[i]};
        sort(hash.begin(), hash.end());
        string ans = "";
        for(int i = 0; i < hash.size(); i++)
            ans = string(hash[i].first, hash[i].second) + ans;
        return ans;
        }
};