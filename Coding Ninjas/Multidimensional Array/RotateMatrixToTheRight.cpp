vector<int> rotateMatRight(vector<vector<int>> mat, int n, int m, int k) {
    int temp;
    vector<int> ans;
    int x = k % m;
    while(x  != 0) {
        for(int i = 0; i < n; i++) {
            temp = mat[i][m - 1];
            for(int j = m - 1; j > 0; j--)
                mat[i][j] = mat[i][j - 1];
            mat[i][0] = temp;
        }
        x--;
    }       
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            ans.push_back(mat[i][j]);
    return ans;
}