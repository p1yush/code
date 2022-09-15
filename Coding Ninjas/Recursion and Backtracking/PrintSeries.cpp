void helper(int n, int k, vector<int> &ans) {
    ans.push_back(n);
    if(n <= 0) {
        return;
    }
    helper(n-k, k, ans);
    ans.push_back(n);
}
vector<int> printSeries(int n, int k)
{
    vector<int> ans;
    helper(n, k, ans);
    return ans;
}