vector<vector<int>> findGoodMatrix(vector<vector<int>> &arr) 
{
    int n = arr.size();
    int m = arr[0].size();
    int up, down, left, right;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(arr[i][j] == 0) {
                up = i, down = i, left = j, right = j;
                while(up >= 0) {
                    if(arr[up][j] == 1)
                        arr[up][j] = -1;
                    up--;
                }
                while(down < n) {
                    if(arr[down][j] == 1)
                        arr[down][j] = -1;
                    down++;
                }
                while(left >= 0) {
                    if(arr[i][left] == 1)
                        arr[i][left] = -1;
                    left--;
                }
                while(right < m) {
                   if(arr[i][right] == 1)
                       arr[i][right] = -1;
                   right++;
                }
            }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(arr[i][j] == -1)
                arr[i][j] = 0;
    return arr;
}
