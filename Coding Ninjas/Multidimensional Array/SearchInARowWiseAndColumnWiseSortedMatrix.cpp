pair<int, int> search(vector<vector<int>> matrix, int x)
{
    int i = 0;
    int j = matrix[0].size() - 1;
    while(i < matrix.size() && j >= 0) {
        if(x == matrix[i][j]) {
            pair<int, int> ans = make_pair(i, j);
            return ans;
        }
        else if(x < matrix[i][j])
            j--;
        else 
            i++;
    }
    pair<int, int> ans = make_pair(-1, -1);
    return ans;
}