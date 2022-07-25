#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n - 2; i++) 
        if(i == 0 || (i > 0 && arr[i] != arr[i - 1])) {
        int j = i + 1, k = n - 1;
        while(j < k) {
            if(arr[j] + arr[k] + arr[i] == K) {
                ans.push_back({arr[j], arr[k], arr[i]});
                while(i < j && (arr[j] == arr[j + 1]))
                    j++;
                while(i < j && (arr[k] == arr[k - 1]))
                    k--;
                j++;
                k--;
            }
            else if(arr[j] + arr[k] + arr[i] < K) 
                j++;
            else 
                k--;
        }
    }
    return ans;
}