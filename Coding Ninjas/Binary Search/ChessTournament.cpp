#include <bits/stdc++.h> 
bool isPossible(vector<int> positions , int n ,  int c, int dist) {
    int c1 = positions[0], cnt = 1;
    for(int i = 1; i < n; i++) {
        if(positions[i] - c1 >= dist) {
            c1 = positions[i];
            cnt++;
        } 
        if(cnt == c)
            return true;
    }
    return false;
}

int chessTournament(vector<int> positions , int n ,  int c){
	sort(positions.begin(), positions.end());
    int s = 1, e = positions[n - 1] - positions[0];
    int ans = -1;
    int mid = s + (e - s) / 2;
    while(s <= e) {
        if(isPossible(positions, n, c, mid)) {
            ans = mid;
            s = mid + 1;
        }
        else 
           e = mid - 1;
        mid = s + (e - s) / 2;
    }
      return ans;
}