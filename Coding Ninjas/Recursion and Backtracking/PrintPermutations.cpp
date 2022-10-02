#include <bits/stdc++.h>
void help(string s, vector<string> &ans, int i) {
    if(i >= s.size()) {
        ans.push_back(s);
        return;
    }
    for(int j = i; j < s.size(); j++) {
        swap(s[i], s[j]);
        help(s, ans, i + 1); 
        swap(s[i], s[j]);
    }
}
vector<string> findPermutations(string &s) {
    vector<string> ans;
    help(s, ans, 0);
    return ans;
}