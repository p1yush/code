#include <bits/stdc++.h> 
void help(string str, string output, vector<string> &ans, int i) {
    if(i >= str.size()) {
       if(output.size() != 0)
           ans.push_back(output);
       return;
    }
    help(str, output, ans, i + 1);
    char element = str[i];
    output.push_back(element);
    help(str, output, ans, i + 1);
}

vector<string> subsequences(string str) {
    vector<string> ans;
    help(str, "", ans, 0);
    return ans;
}