#include <bits/stdc++.h> 
int firstOccurence(vector<int> a, int n, int key) {
   int s = 0, e = n - 1;
   int mid = s + (e - s) / 2;
   int ans = -1;
   while (s <= e) {
      if (a[mid] == key) {
         ans = mid;
         e = mid - 1;
      }
      else if (key > a[mid])
         s = mid + 1;
      else
         e = mid - 1;
      mid = s + (e - s) / 2;
   }
   return ans;
}

int lastOccurence(vector<int> a, int n, int key) {
   int s = 0, e = n - 1;
   int mid = s + (e - s) / 2;
   int ans = -1;
   while (s <= e) {
      if (a[mid] == key) {
         ans = mid;
         s = mid + 1;
      }
      else if (key > a[mid])
         s = mid + 1;
      else
         e = mid - 1;
      mid = s + (e - s) / 2;
   }
   return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> ans = make_pair(firstOccurence(arr, n, k), lastOccurence(arr, n, k));
    return ans;
}