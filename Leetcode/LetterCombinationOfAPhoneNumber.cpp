class Solution {
public:
    void combination(vector<string> &ans, string output, string digits, string mapping[], int index) {
        if(index >= digits.size()) {
            ans.push_back(output);
            return;
        }    
        int digit = digits[index] - '0';
        string value = mapping[digit];
        
        for(int i = 0; i < value.size(); i++) {
            output.push_back(value[i]);
            combination(ans, output, digits, mapping, index + 1);
            output.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output = "";
        if(digits.size() == 0)
            return ans;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        combination(ans, output, digits, mapping, 0);
        return ans;
    }
};