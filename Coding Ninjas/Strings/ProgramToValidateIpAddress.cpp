bool isValidIPv4(string ipAddress) {
    int count = 0, i = 0;
    while(i < ipAddress.size()) {
        if(ipAddress[i] >= 'a' && ipAddress[i] <= 'z')
            return false;
        int check = 0;
        while(ipAddress[i] != '.' && i < ipAddress.size())  {
            check = check * 10 + (ipAddress[i] - '0');
            i++;
        }
        if(!(check >= 0 && check <= 255))
            return false;
        count++;
        i++;
    }
    if(count == 4)
        return true;
    else 
         return false;
}