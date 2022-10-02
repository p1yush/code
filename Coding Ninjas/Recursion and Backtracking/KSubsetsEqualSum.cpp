bool solver(vector<int>& arr,vector<bool>& visited, int sum, int index) {
    if (sum == 0) 
        return true;
    if (index == -1 || sum < 0) 
        return false;
    bool status = false;
    if (!visited[index]) 
        status = solver(arr, visited, sum - arr[index], index - 1);
    if (!status) 
        status = solver(arr, visited, sum, index - 1);
    else 
        visited[index] = true;
    return status;
}
bool splitArray(vector<int> &arr, int K) {
    int n = arr.size();
    if (K == 1) 
        return true;
    if (K > n) 
        return false;
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    if (sum % K != 0) 
        return false;
    vector<bool> visited(n);    
    bool check = true;
    for (int i = n - 1; i >= 0 && check; i--) {
        if (arr[i] == 0) 
            visited[i] = true;
        if (!visited[i]) 
            check = check && solver(arr, visited, sum / K, i);
    }
    return check;
}