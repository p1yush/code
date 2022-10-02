void helper(int k, string sf, vector<string> &ans, string prev){
    if(k == 0) { 
        ans.push_back(sf);
        return;
    }
    if(prev != "1") 
        helper(k - 1, sf + "1", ans, "1"); 
    helper(k - 1, sf + "0", ans, "0"); 
}
vector<string> generateString(int k) {
    vector<string> ans;
    helper(k, "", ans, "");
    sort(ans.begin(), ans.end());
    return ans;
}