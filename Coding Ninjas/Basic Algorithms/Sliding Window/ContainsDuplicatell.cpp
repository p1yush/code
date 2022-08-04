#include<bits/stdc++.h>
bool checkDuplicate(vector<int> &arr, int n, int k) {
    unordered_map<int, int> mp;
    int i = 0, j = 0;
    while(j < n) {
        if(j - i + 1 <= k + 1) {
            mp[arr[j]]++;
            if(mp[arr[j]] == 2)
                return true;
            j++;
        }
        else {
            mp[arr[i]]--;
            if(mp[arr[i]] == 0)
                mp.erase(arr[i]);
            i++;
        }
    }
    return false;
}