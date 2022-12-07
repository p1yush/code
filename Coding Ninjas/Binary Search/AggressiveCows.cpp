#include<bits/stdc++.h>
bool isPossible(vector<int> stalls, int k, int dist) {
    int cow1 = stalls[0], count = 1;    
    for(int i = 1; i < stalls.size(); i++) {
        if(stalls[i] - cow1 >= dist) {
            cow1 = stalls[i];
            count++;
        }
        if(count == k)
            return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());
    int s = 1, e = stalls[stalls.size() - 1] - stalls[0];
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s <= e) {
        if(isPossible(stalls, k, mid)) {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}