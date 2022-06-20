int kadane(vector<int> &a) {
    int sum = 0, mxsum = INT_MIN;
    for(int i = 0; i < a.size(); i++) {
        if(sum >= 0)
            sum += a[i];
        else 
            sum = a[i];
        mxsum = max(sum, mxsum);
    }
    return mxsum;
}

int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
   int ma = INT_MIN;
    for(int i = 0; i < n; i++) {
        vector<int> ans(m);
        for(int j = i; j < n; j++) {
            for(int c = 0; c < m; c++)
                ans[c] += arr[j][c];
            ma = max(ma, kadane(ans));
        }
    }
    return ma;
}