#include <bits/stdc++.h> 
bool isPossible(vector<int> arr, int n, int m, int barrier) {
    int student = 1, pages = 0;
    for(int i = 0; i < n; i++) {
        if(pages + arr[i] <= barrier) 
            pages += arr[i];
        else {
            student++;
            if(student > m || arr[i] > barrier)
                return false;
            pages = arr[i];
        }
    }
    return true;
}
    
int allocateBooks(vector<int> arr, int n, int m) {
    int low = 0, high = 0;
    int res = -1;
    for(int i = 0; i < n; i++)
        high += arr[i];
    int mid = low + (high - low) / 2;
    while(low <= high) {
        if(isPossible(arr, n, m, mid)) {
            res = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
        mid = low + (high - low) / 2; 
    }
    return res;
}