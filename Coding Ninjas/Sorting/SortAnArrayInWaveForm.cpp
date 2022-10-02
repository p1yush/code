vector<int> waveFormArray(vector<int> &arr, int n) {
   for(int i = 1; i < n; i += 2) {
       if(arr[i] > arr[i - 1])
           swap(arr[i - 1], arr[i]);
       if(arr[i] > arr[i + 1] && i < n - 1)
           swap(arr[i], arr[i + 1]);
   }
   return arr;
}