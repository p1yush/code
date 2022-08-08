void inplaceRotate(vector<vector<int>> &inputArray)
{
    for(int i = 0; i < inputArray.size(); i++)
        for(int j = i; j < inputArray[0].size(); j++) 
            swap(inputArray[i][j], inputArray[j][i]);
    for(int j = 0; j < inputArray[0].size(); j++)
        for(int i = 0; i < inputArray.size() / 2; i++)
            swap(inputArray[i][j], inputArray[inputArray.size() - i - 1][j]);
}