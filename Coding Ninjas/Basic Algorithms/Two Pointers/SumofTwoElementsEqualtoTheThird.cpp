vector<int> findTriplets(vector<int> &arr, int n) 
{
    vector<int> ans;
    sort(arr.begin(), arr.end());
    for(int i = n - 1; i >= 0; i--) {
        int j = 0, k = i - 1;
        while(j < k) {
            if(arr[j] + arr[k] == arr[i]) {
                ans.push_back(arr[j]);
                ans.push_back(arr[k]);
                ans.push_back(arr[i]);
                return ans;
            }
            else if(arr[j] + arr[k] < arr[i]) 
                j++;
            else 
                k--;
        }
    }
    return ans;
}