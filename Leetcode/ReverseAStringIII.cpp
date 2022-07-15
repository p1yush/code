  string reverseWords(string s) {
        int j = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ' ) {
                reverse(s.begin() + j, s.begin() + i);
                j = i + 1;
            }
            else if(s[i + 1] == '\0')
                reverse(s.begin() + j, s.begin() + i + 1);
        }
        return s;
    }