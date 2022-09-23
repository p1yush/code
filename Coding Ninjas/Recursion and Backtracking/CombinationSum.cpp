#include<bits/stdc++.h>
void help(vector<int>& ARR, int B, int i, int sum, vector<int> a, vector<vector<int>>& ans) {
    if(sum > B)
        return;
    if(i == ARR.size()) {
        if(sum == B)
            ans.push_back(a);
        return;
    }
    sum += ARR[i];
    a.push_back(ARR[i]);
    help(ARR, B, i, sum, a, ans);
    sum -= ARR[i];
    a.pop_back();
    help(ARR, B, i + 1, sum, a, ans);
}

vector<vector<int>> combSum(vector<int>& ARR, int B)
{
    vector<int> a;
    vector<vector<int>> ans;
    sort(ARR.begin(), ARR.end());
    help(ARR, B, 0, 0, a, ans);
    return ans;
}
