int countFlip(vector<vector<int>> &mat)
{
    int n = mat.size();
    int up, down, left, right;   
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(mat[i][j] == 0)
            {
                up = i;
                down = i;
                left = j;
                right = j;
                while(up >= 0) {
                    if(mat[up][j] == 1)
                        mat[up][j] =- 1;
                     up--;
                }
                 while(down < n) {
                    if(mat[down][j] == 1)
                        mat[down][j] =- 1;
                     down++;
                }
                 while(left >= 0) {
                    if(mat[i][left] == 1)
                        mat[i][left] =- 1;
                     left--;
                }
                 while(right < n) {
                    if(mat[i][right] == 1)
                        mat[i][right] =- 1;
                     right++;
                }
            }
    int c = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
           if(mat[i][j] == -1) 
               c++;
    return c;
}