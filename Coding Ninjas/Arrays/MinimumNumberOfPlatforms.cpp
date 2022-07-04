int calculateMinPatforms(int at[], int dt[], int n) {
    int mx = 1, count = 1;
    int i = 1, j = 0;
    sort(at, at + n);
    sort(dt, dt + n);
    while(i < n && j < n) {
        if(at[i] <= dt[j]) {
            i++;
            count++;
        }
        else {
            j++;
            count--;
        }
        mx = max(count, mx);
    }
    return mx;
}