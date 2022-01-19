void solve(string output, string str, int index, string &ans) {
    if(index >= str.size()) {
        ans.push_back(output);
        return;
    }
    solve(output, str, index + 1, ans);
    
    char element = str[index];
    output.push_back(element);
    solve(output, str, index + 1, ans);
}


vector<string> subsequences(string str){
	string output = "";
    vector<string> ans;
    solve(output, str, 0, ans);
    return ans;
}
