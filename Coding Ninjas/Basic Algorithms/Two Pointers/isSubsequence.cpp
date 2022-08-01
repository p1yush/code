bool isSubSequence(string str1, string str2) {
    int j = 0;
    for(int i = 0; i < str2.size(); i++)
        if(str1[j] == str2[i])
            j++;
    if(j == str1.size())
        return true;
    else
        return false;
}
