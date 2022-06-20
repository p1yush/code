long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
	for(int i = 0; i < k; i++)
        for(int j = 0; j < n; j++)
            arr.push_back(arr[j]);
    int sum = 0, mxsum = -1e15;
    for(int i = 0; i < k*n; i++) {
        if(sum >= 0)
            sum += arr[i];
        else
            sum = arr[i];
        mxsum = max(sum, mxsum);
    }
    return mxsum;
}