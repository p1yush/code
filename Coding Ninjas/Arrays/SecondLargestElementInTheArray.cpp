int findSecondLargest(int n, vector<int> &arr)
{
    int largest = -1e9 + 7;
    int seclargest = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            seclargest = largest;
            largest = arr[i];
        }
         if(arr[i] > seclargest && arr[i] < largest)
                seclargest = arr[i];
    }
    if(seclargest == -1e9 + 7)
        return -1;
    return seclargest;
}