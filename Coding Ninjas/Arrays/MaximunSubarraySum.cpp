#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int maxsum = INT_MIN, sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(arr[i] > sum)
            sum = arr[i];
        maxsum = max(sum, maxsum);
    }
    if(maxsum < 0)
        return 0;
    return maxsum;
}