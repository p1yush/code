#include<bits/stdc++.h>
string multiplyStrings(string a , string b ){
   if(a == "0" || b == "0")
       return "0";
    vector<int> num(a.size() + b.size());
    for(int i = a.size() - 1; i >= 0; i--)
        for(int j = b.size() - 1; j >= 0; j--) {
            num[i + j + 1] += (a[i] - '0') * (b[j] - '0');
            num[i + j] += num[i + j + 1] / 10;
            num[i + j + 1] %= 10;
        }
    int i = 0;
    while(i < num.size() && num[i] == 0) 
        i++;
    string res = "";
    while(i < num.size()) {
        res.push_back(num[i] + '0');
        i++;
    }
    return res;
}
              