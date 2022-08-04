#include<bits/stdc++.h>
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    vector<int> ans;
    unordered_map<int, int> mp;
    int i = 0, j = 0;
    while(j < arr.size()) {
        if(j - i + 1 < k) { 
            mp[arr[j]]++;
            j++;
        }
        else if(j - i + 1 == k) {
            mp[arr[j]]++;
            ans.push_back(mp.size());
            j++;
        }
        else {
            mp[arr[i]]--;
            if(mp[arr[i]] == 0)
                mp.erase(arr[i]);
            i++;
        }
    }
    return ans;
}