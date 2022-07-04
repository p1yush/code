#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int> st;
    for(int i = 0; i < n; i++)
        st.insert(arr[i]);
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(!st.count(arr[i] - 1)) {
            int currentnum = arr[i];
            int currentstreak = 1;
            while(st.count(currentnum + 1)) {
                currentnum += 1;
                currentstreak += 1;
            }
            count = max(count, currentstreak);
        }
    }
    return count;
}