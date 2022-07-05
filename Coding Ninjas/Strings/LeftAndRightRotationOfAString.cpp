string leftRotate(string str, int d) {
    if(str.length() == 1)
        return str;
    if(d == 0)
        return str;
    int x = d % str.length();
    reverse(str.begin(), str.begin() + x);
    reverse(str.begin() + x, str.end());
    reverse(str.begin(), str.end());
    return str;
}

string rightRotate(string str, int d) {
    if(str.length() == 1)
        return str;
    if(d == 0)
        return str;
    int x = d % str.length();
    reverse(str.begin(), str.begin() + str.length() - x);
    reverse(str.begin() + str.length() - x, str.end());
    reverse(str.begin(), str.end());
    return str;
}