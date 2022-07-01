#include<bits/stdc++.h>
bool isValidPair(vector<int> &arr, int n, int k, int m)
{
    if(n % 2 == 1)
        return false;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
        mp[arr[i] % k]++;
    for(auto it: mp) {
        if(2 * it.first == m) {
            if(mp[it.first] % 2 == 1)
                return false;
        }
        else {
            if(mp[(m - it.first + k) % k] != mp[it.first])
                return false;
        }
    }
    return true;
}