class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int x = INT_MIN;
        vector<int> a;
        for(int i = 0; i < arr.size(); i++) {
           for(int j = i + 1; j < arr.size(); j++) 
               if(x < arr[j])
                   x = arr[j];
            a.push_back(x);
            x = INT_MIN;
            if(i == arr.size() - 1)
                a[i] = -1;
        }
        return a;
    }
};