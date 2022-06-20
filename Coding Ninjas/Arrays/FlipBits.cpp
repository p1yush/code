int flipBits(int* arr, int n) 
{
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            cnt++;
            arr[i] = -1;
        }
        else 
            arr[i] = 1;
    }
    int sum = 0, mxsum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum < 0)
            sum = 0;
        mxsum = max(sum, mxsum);
    }
    return cnt + mxsum;
}