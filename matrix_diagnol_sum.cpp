class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int count = 0, l;
        for(int i = 0; i < mat.size(); i++) {
            l = mat[i].size();
            count += mat[i][i] + mat[i][mat.size() - 1 - i];
        }
        if(mat.size() % 2 == 1)
             count -= mat[mat.size()/2][l/2];
        return count;
    }
};