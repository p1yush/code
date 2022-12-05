class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = "";
        int count = 0, count2 = 0;
        for(int i = 0; i < s.size() / 2; i++) 
            a += s[i];
        string b = "";
        for(int i = s.size() / 2; i < s.size(); i++) 
            b += s[i];
        for(int i = 0; i < s.size() / 2; i++) {
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
                count++;
            if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u' || b[i] == 'A' || b[i] == 'E' || b[i] == 'I' || b[i] == 'O' || b[i] == 'U')
                count2++; 
        }
        if(count == count2)
            return true;
        return false;
    }
};