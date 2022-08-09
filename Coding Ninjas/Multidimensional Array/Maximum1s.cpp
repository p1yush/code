int maxOne(vector<vector<int>> &arr)
{
    int x;
    int mx = -1, count = 0;
	for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++)
            count += arr[i][j];
        if(count > mx) {
            x = i;
            mx = count;
        }
        count = 0;
    }
    return x;
}
