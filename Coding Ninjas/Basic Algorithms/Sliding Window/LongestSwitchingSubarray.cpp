int switchingSubarray(vector<int> &arr, int n) {
   int j = 2, i = 0, count = 2;
    int mx = 0;
    if(arr.size() == 1)
        return 1;
    else if(arr.size() == 2)
        return 2;
    else {
       while(j < n) {
           if(arr[i] == arr[j]) {
               count++;
               i++;
               j++;
           }
           else {
               i++;
               j++;
               count = 2;
           }
           mx = max(mx, count);
        }
     }
    return mx;
}