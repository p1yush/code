#include<bits/stdc++.h>
int findMaxFruits(string &str, int n) {
    unordered_map<char, int> mp;
    int mx = 0, j = 0;
    for(int i = 0; i < str.size(); i++) {
        mp[str[i]]++;
        if(mp.size() == 3) {
            while(mp.size() == 3) {
                mp[str[j]]--;
                if(mp[str[j]] == 0)
                    mp.erase(str[j]);
                j++;
            }
        }
        mx = max(mx, i - j + 1);
    }
    return mx;
}