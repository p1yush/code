#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
    for(int i = 0; i < arr.size(); i++)
        for(int j = i + 1; j < arr.size(); j++)
            if(arr[i] + arr[j] == s) {
                vector<int> pair(2);
                pair[0] = min(arr[i], arr[j]);
                pair[1] = max(arr[i], arr[j]);
                ans.push_back(pair);
                continue;
            }
    sort(ans.begin(), ans.end());
    return ans;
}