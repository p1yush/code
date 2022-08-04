#include<bits/stdc++.h>
vector<int> maximumInAllSubarraysOfSizeK(vector<int> arr, int n, int k)
{
   deque<int> dq;
   vector<int> ans;
   if (k == 1 || arr.size() == 1)
      return arr;
   int i = 0, j = 0;
   while (j < n + 1) {
      if (j - i + 1 < k + 1) {
         while (!dq.empty() && dq.back() < arr[j])
            dq.pop_back();
         dq.push_back(arr[j]);
         j++;
      }
      else if (j - i + 1 == k + 1) {
         ans.push_back(dq.front());
         if (dq.front() == arr[i])
            dq.pop_front();
         i++;
      }
   }
   return ans;
}