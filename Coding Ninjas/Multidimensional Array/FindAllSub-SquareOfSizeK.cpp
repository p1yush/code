vector<vector<int>> sumOfKxKMatrices(vector<vector<int>> &arr, int k){
    vector<vector<int>> sumMatrix;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        vector<int> ans;
        for(int j = 0; j < arr[i].size(); j++) {
            if(i + k <= arr.size() && j + k <= arr[0].size()) {
            for(int m = i; m < i + k; m++) 
                for(int n = j; n < j + k; n++) 
                    sum += arr[m][n];
                ans.push_back(sum);
                sum = 0;
         }   
       }
        sumMatrix.push_back(ans);
    }
    return sumMatrix;
}
