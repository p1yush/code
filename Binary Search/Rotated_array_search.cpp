int binarySearch(int* arr, int start, int end, int key) {
   int s = start, e = end;
   int mid = s + (e - s) / 2;
   while (s <= e) {
      if (arr[mid] == key)
         return mid;
      else if (arr[mid] < key)
         s = mid + 1;
      else
         e = mid - 1;
      mid = s + (e - s) / 2;
   }
   return -1;
}

int getpivot(int* arr, int n) {
   int s = 0, e = n - 1;
   int mid = s + (e - s) / 2;
   while (s < e) {
      if (arr[0] <= arr[mid])
         s = mid + 1;
      else
         e = mid;
      mid = s + (e - s) / 2;
   }
   return s;
}

int search(int* arr, int n, int key) {
    int pivot = getpivot(arr, n);
    if(key >= arr[pivot] && key <= arr[n - 1])
        binarySearch(arr, pivot, n - 1, key);
    else
        binarySearch(arr, 0, pivot - 1, key);
}