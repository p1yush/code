#include<bits/stdc++.h> 
vector<int> smallestSubarrayWithKDistinct(vector<int> &arr, int k)
{
    int i = 0, j = 0;
    int min = INT_MAX;
    vector<int> ans;
    unordered_map<int, int> mp;
    while(j < arr.size()) {
        mp[arr[j]]++;
        if(mp.size() < k)
            j++;
        else if(mp.size() == k) {
            while(mp.size() == k) {
                if(min > j - i + 1) {
                    min = j - i + 1;
                    ans.clear();
                    ans.push_back(i);
                    ans.push_back(j);
                    }
                mp[arr[i]]--;
                if(mp[arr[i]] == 0)
                    mp.erase(arr[i]);
                i++;
              }
            j++;
         }
    }
    if(ans.size() == 0) {
        ans.push_back(-1);
        return ans;
    }
    else
        return ans;
}