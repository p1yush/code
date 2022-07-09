char findNonRepeating(string str) {
    vector<int> check(256);
    for(int i = 0; i < str.size(); i++)
        check[str[i]]++;
    for(int i = 0; i < str.size(); i++)
        if(check[str[i]] == 1)
            return str[i];
    return '#';
}
