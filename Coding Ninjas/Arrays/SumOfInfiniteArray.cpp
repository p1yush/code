vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    int mod = 1000000007;
    vector<long long> pr(n + 1);
    vector<int> ans;
    for(int i = 1; i <= n; i++) {
        pr[i] = (pr[i - 1] + arr[i - 1]) % mod;
    }
    for(int i = 0; i < queries.size(); i++) { 
        long long l = ((queries[i][0] - 1) / n) % mod;
        long long lsum = (pr[n] * l) % mod;
        lsum = (lsum + pr[(queries[i][0] - 1) % n]) % mod ;
        long long r = (queries[i][1] / n) % mod;
        long long rsum = (pr[n] * r) % mod;
        rsum = (rsum + pr[queries[i][1] % n]) % mod ;
        ans.push_back((int) ((rsum - lsum + mod) % mod));
    }
    return ans;
}