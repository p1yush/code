#include <bits/stdc++.h> 
int squareRoot(int a)
{
	int s = 0, e = a;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s <= e) {
        long long square = mid * mid;
        if(square == a)        
            return mid;
        else if(square < a) {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
         mid = s + (e - s) / 2;
    }
    return ans;
}