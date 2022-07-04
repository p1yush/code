string convertString(string str) 
{
    str[0] = toupper(str[0]);
	for(int i = 0; i < str.length() - 1; i++)
        if(str[i] == ' ')
            str[i + 1] = toupper(str[i + 1]);
    return str;
}