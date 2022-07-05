string removeVowels(string inputString) {
    string ans;
    for(int i = 0; i < inputString.size(); i++) {
        if(inputString[i] == 'a' || inputString[i] == 'e' || inputString[i] == 'i' ||
          inputString[i] == 'o' || inputString[i] == 'u' || inputString[i] == 'A' || 
          inputString[i] == 'E' || inputString[i] == 'I' || inputString[i] == 'O' || 
          inputString[i] == 'U')
            continue;
        else
            ans.push_back(inputString[i]);
    }
    return ans;
}
