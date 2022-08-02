vector<int> findEquilibriumIndices(vector<int> &sequence) {
    int n = sequence.size();
    vector<int> ans;
    vector<int> pr(n);
    pr[0] = sequence[0];
    for(int i = 0; i < n; i++)
        pr[i] = sequence[i] + pr[i - 1];
    for(int i = 0; i < n; i++) {
        int lsum = pr[i] - sequence[i];
        int rsum = pr[n - 1] - pr[i];
        if(lsum == rsum)
            ans.push_back(i);
        }
    return ans;
}