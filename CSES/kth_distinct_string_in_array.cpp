class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int count = 0;
        map<string, int>mp;
        for(int i = 0; i < arr.size(); i++)
            mp[arr[i]]++;
        for(int  i = 0; i < arr.size(); i++) {
            if(mp[arr[i]] > 1)
                continue;
        count++;
            if(count == k)
                return arr[i];
        }
        return "";
    }
};