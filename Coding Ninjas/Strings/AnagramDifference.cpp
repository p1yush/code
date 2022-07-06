#include<bits/stdc++.h>
int getMinimumAnagramDifference(string &str1, string &str2) {
    vector<int> check(256);
    int count = 0;
    for(int i = 0; i < str1.length(); i++) 
        check[str1[i]]++;
    for(int i = 0; i < str2.length(); i++) {
        if(check[str2[i]] != 0)
            check[str2[i]]--;
        else
            count++;
        }
    return count;
}