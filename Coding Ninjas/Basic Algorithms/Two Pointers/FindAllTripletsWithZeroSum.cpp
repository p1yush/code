vector<vector<int>> findTriplets(vector<int>arr, int n) {
	vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++)
        if(i == 0 || (i > 0 && arr[i] != arr[i - 1])) {
            int sum = 0 - arr[i], low = i + 1, high = arr.size() - 1;
            while(low < high) {
                if(sum == arr[low] + arr[high]) {
                    ans.push_back({arr[i], arr[low], arr[high]});
                    while(low < high && (arr[low] == arr[low + 1]))
                        low++;
                    while(low < high && (arr[high] == arr[high - 1]))
                        high--;
                    low++;
                    high--;
                }
                else if(sum > arr[low] + arr[high])
                    low++;
                else 
                    high--;
            } 
        }
    return ans;
}