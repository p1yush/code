class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        string m = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ')
                count++;
            if(count == k)
                break;
            m += s[i];
        }
        return m;
    }
};