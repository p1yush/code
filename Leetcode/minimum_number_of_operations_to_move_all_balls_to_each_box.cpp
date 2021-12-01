class Solution {
public:
    vector<int> minOperations(string boxes) {
        int count = 0;
        vector<int> arr;
        for(int i = 0; i < boxes.length(); i++) {
            for(int j = 0; j < boxes.length(); j++)
                if(boxes[j] == '1')
                    count += abs(i - j);
            arr.push_back(count);
            count = 0;
        }
        return arr;
    }
};