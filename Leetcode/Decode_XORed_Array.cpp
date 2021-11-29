class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
      vector<int> arr{first};
      for(auto val: encoded) 
          arr.push_back(first ^= val);
        return arr;
    }
};