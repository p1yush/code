#include<bits/stdc++.h>
bool isPossible(vector<int> boards, int k, int mid) {
    int painter = 1, paintboards = 0;
    for(int i = 0; i < boards.size(); i++) {
        if(paintboards + boards[i] <= mid)
            paintboards += boards[i];
        else {
            painter++;
            if(boards[i] > mid || painter > k)
                return false;
            paintboards = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0, e = 0;
    for(int i = 0; i < boards.size(); i++)
        e += boards[i];
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s <= e) {
       if(isPossible(boards, k, mid)) {
           ans = mid;
           e = mid - 1;
       }     
       else 
           s = mid + 1;
       mid = s + (e - s) / 2;
    }
    return ans;
}