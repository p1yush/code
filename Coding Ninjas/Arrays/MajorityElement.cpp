#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    unordered_map<int, int> mp;
    vector<int> ans;
    for(int i = 0; i < arr.size(); i++)
        mp[arr[i]]++;
    float x = floor(arr.size() / 3);
    for(auto it: mp) {
        if(it.second > x)
            ans.push_back(it.first);
    }
    return ans;
}