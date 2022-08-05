#include<bits/stdc++.h>
int lengthOfLongestSubstring(string &s) {
    unordered_map<char, int> mp;
    int mx = 0, count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(mp[s[i]] == 0) {
            mp[s[i]] = i + 1;
            count++;
        }
        else {
            if(mp[s[i]] < i - count + 1) {
                count++;
                mp[s[i]] = i + 1;
            } 
            else {
                count = i - mp[s[i]] + 1;
                mp[s[i]] = i + 1;
            }
        }
        mx = max(mx, count);
    }
    return mx;
}