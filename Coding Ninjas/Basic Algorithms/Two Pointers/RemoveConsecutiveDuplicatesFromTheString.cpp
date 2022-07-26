string removeConsecutiveDuplicates(string str) 
{
    string s;
    for(int i = 0; i < str.size(); i++)
        if(str[i] != str[i + 1])
            s.push_back(str[i]);
    str.push_back(str.size() - 1);
    return s;
}