#include<bits/stdc++.h>
vector<string> matchSpecificPattern(vector<string> words, int n, string pattern)
{
    vector<string> ans;
    unordered_map<char, int> fp;
    int j = 0;
    string res = "";
    for(int i = 0; i < pattern.size(); i++) {
        if(fp.find(pattern[i]) == fp.end())
            fp[pattern[i]] = j++;
        res += to_string(fp[pattern[i]]);
    }
    for(auto word: words) {
        string check = "";
        int p = 0;
        unordered_map<char, int> fw;
        for(int i = 0; i < word.size(); i++) {
            if(fw.find(word[i]) == fw.end())
                fw[word[i]] = p++;
            check += to_string(fw[word[i]]);
        }
        if(word.size() == pattern.size() && res == check)
            ans.push_back(word);
    }
    return ans;
}