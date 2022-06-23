#include<bits/stdc++.h>
int bestInsertPos(vector<int> arr, int n, int m)
{
    arr.push_back(m);
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++)
        if(arr[i] == m)
            return i;
}