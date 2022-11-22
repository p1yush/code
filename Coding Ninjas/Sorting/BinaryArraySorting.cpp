vector<int> sortBinaryArray(vector<int> arr, int n)  {
 	int low = 0, high = n - 1;
    while(low < high) {
        if(arr[low] == 0) 
            low++;
        else {
            swap(arr[low], arr[high]);
            high--;
        }
    }
    return arr;
}