bool isPossible(int *arr, int n)
{
    int check = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i - 1] > arr[i]) {
            if(check == 1)
                return false;
            if(i < 2 || arr[i - 2] <= arr[i])
                arr[i - 1] = arr[i];
            else
                arr[i] = arr[i - 1];
            check = 1;
        }
    }
    return true;
}