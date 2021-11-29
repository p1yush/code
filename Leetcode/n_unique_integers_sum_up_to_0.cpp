class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr;
        for(int i = 0; i < n/2; i++) {
            arr.push_back(i + 1);
            arr.push_back(-i - 1);
        }
          if(n % 2 == 1)
                arr.push_back(0);
        return arr;
    }
};