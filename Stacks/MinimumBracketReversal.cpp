#include<bits/stdc++.h>
int findMinimumCost(string str) {
    stack<int> st;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '{')
            st.push(str[i]);
        else {
            if(!st.empty() && st.top() == '{')
                st.pop();
            else 
                st.push(str[i]);
        }
    }
    int a = 0, b= 0;
    while(!st.empty()) {
        if(st.top() == '{')
            a++;
        else
            b++;
        st.pop();
    }
    int ans = ((a + 1)/2) + ((b + 1)/2);
    if(str.length() % 2 == 1)
        return -1;
    else
        return ans;
}