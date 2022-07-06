#include<bits/stdc++.h>
int getLengthofLongestSubstring(string s, int k) {
    int ans = -1;
    int j = 0;
    unordered_map<char, int> mp;
    for(int i = 0; i < s.length(); i++) {
        mp[s[i]]++;
        if(mp.size() <= k)
            ans = max(ans, (i - j + 1));
        else
            while(mp.size() > k && i > j) {
                if(mp[s[j]] == 1)
                    mp.erase(s[j]);
                else 
                    mp[s[j]]--;
                j++;
            }
        ans = max(ans, (i - j + 1));
    }
    return ans;
}