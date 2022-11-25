int firstOccurence(int a[], int n, int key) {
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

int lastOccurence(int a[], int n, int key) {
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

int countOccurences(int arr[], int n, int X)
{
    int last = lastOccurence(arr, n, X);
    int first = firstOccurence(arr, n, X);
    if(first == -1)
        return 0;
    return last - first + 1;
}