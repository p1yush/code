char kThCharaterOfDecryptedString(string s, long long k)
{
    long long res = 0;
    long long i = 0, j = 0;
    string dec = "";
    while(i < s.size()) {
        long long count = 0, alp = 0;
        while(s[i] >= 'a' && s[i] <= 'z') {
            alp++;
            i++;
        }
        while(s[i] >= '0' && s[i] <= '9') {
            count = count * 10 + (s[i] - '0');
            i++;
        }
        res = alp * count;
        if(k > res) {
            k -= res;
            j = i;
        }
        else {
            k--;
            k %= alp;
            break;
        }
    }
    return s[j + k];
}