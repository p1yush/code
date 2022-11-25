#include <bits/stdc++.h> 
bool findInMatrix(int x, vector<vector<int>> &arr)
{
    int n = arr.size(), m = arr[0].size();
    int s = 0, e = (n * m) - 1;
    int mid = s + (e - s) / 2;
    while(s <= e) {
        if(arr[mid / m][mid % m] == x)
            return true;
        else if(arr[mid / m][mid % m] < x)
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return false;
}