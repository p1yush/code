vector<int> rowWaveForm(vector<vector<int>> &mat) {
    int cnt = 1;
    vector<int> ans;
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            if(cnt % 2 == 1)
                ans.push_back(mat[i][j]);
            else
                ans.push_back(mat[i][mat[0].size() - j - 1]);
        }
        cnt++;
    }
    return ans;
}
