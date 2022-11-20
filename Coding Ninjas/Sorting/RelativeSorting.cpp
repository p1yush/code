#include<bits/stdc++.h>
vector<int> relativeSorting(vector<int> &arr, vector<int> &brr, int n, int m)
{
    vector<int> ans;
    map<int, int> mp;
    for(int i = 0; i < n; i++)
        mp[arr[i]]++;
    for(int i = 0; i < m; i++) 
        if(mp.find(brr[i]) != mp.end()) {
            auto x = mp.find(brr[i]);
            int count = x->second;
            vector<int> v(count, brr[i]);
            ans.insert(ans.end(), v.begin(), v.end());
            mp.erase(brr[i]);
        }
    for(auto it: mp)
        for(int i = 0; i < it.second; i++)
            ans.push_back(it.first);
    return ans;
}
