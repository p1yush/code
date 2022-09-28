#include <bits/stdc++.h> 
void help(vector<int> &arr, vector<int>& a1, vector<int>& a2, int sum1, int sum2, int i, int &ans) {
    if(i == arr.size()) {
        ans = min(ans, abs(sum1 - sum2));
        return;
    }
    if(a1.size() < (arr.size() + 1) / 2) {
        a1.push_back(arr[i]);
        help(arr, a1, a2, sum1 + arr[i], sum2, i + 1, ans);
        a1.pop_back();
    }
     if(a2.size() < (arr.size() + 1) / 2) {
        a2.push_back(arr[i]);
        help(arr, a1, a2, sum1, sum2 + arr[i], i + 1, ans);
        a2.pop_back();
    }
}

int tugOfWar(vector<int> &arr, int n)
{
    vector<int> a1, a2;
    int ans = INT_MAX;
    help(arr, a1, a2, 0, 0, 0, ans);
    return ans;
}