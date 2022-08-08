vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
    vector<int> ans;
    int total = n * m;
    int count = 0;
    int row = 0, col = 0, mxrow = n, mxcol = m;
    while(count < total) {
        for(int i = col; i < mxcol; i++) {
            if(count < total)
                ans.push_back(matrix[row][i]);
            count++;
        }
        row++;
        for(int i = row; i < mxrow; i++) {
            if(count < total)
                ans.push_back(matrix[i][mxcol - 1]);
            count++;
        }
        mxcol--;
        for(int i = mxcol - 1; i >= col; i--) {
            if(count < total)
                ans.push_back(matrix[mxrow - 1][i]);
            count++;
        }
        mxrow--;
        for(int i = mxrow - 1; i >= row; i--) {
            if(count < total)
                ans.push_back(matrix[i][col]);
            count++;
        }
        col++;
    }
    return ans;
}