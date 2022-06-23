#include<bits/stdc++.h>
vector < int > countSmallerOrEqual(int * a, int * b, int n, int m) {
    vector<int> ans(n);
    sort(b, b + m);
    for(int i = 0;  i < n; i++)
        ans[i] = upper_bound(b, b + m, a[i]) - b;
    return ans;
}