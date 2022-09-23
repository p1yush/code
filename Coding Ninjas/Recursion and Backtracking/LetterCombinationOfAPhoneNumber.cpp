void help(string s, string map[], vector<string> &ans, int ind, string a) {
    if(ind >= s.size()) {
        ans.push_back(a);
        return;
    }
    int num = s[ind] - '0';
    string str = map[num];
    for(int i = 0; i < str.size(); i++) {
        a.push_back(str[i]);
        help(s, map, ans, ind + 1, a);
        a.pop_back();
    }
}

vector<string> combinations(string s) {
    string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string a = "";
    vector<string> ans;
    help(s, map, ans, 0, a);
    return ans;
}