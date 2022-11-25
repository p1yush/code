#include <bits/stdc++.h> 
bool findInMatrix(int x, vector<vector<int>> &arr)
{
    int n = arr.size(), m = arr[0].size();
    int i = 0, j = m - 1;
    while(i < n && j >= 0) {
        if(arr[i][j] == x)
            return true;
        else if(arr[i][j] > x)
            j--;
        else 
            i++;
    }
    return false;
}