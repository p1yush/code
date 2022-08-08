#include<bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            ans.push_back(matrix[i][j]);
    sort(ans.begin(), ans.end());
    return ans[ans.size() / 2];
}
