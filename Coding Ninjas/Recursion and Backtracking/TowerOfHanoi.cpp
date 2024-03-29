#include<bits/stdc++.h>
void toh(int n, int a, int b, int c, vector<vector<int>>& res) {
   if(n == 0) 
       return;
   toh(n-1, a, c, b, res);   
   res.push_back({a,c});     
   toh(n-1, b, a, c, res); 
}

vector<vector<int>> towerOfHanoi(int n) {
   vector<vector<int>> res;
   toh(n, 1, 2, 3, res);
   return res;
}