#include<bits/stdc++.h>
int minSwaps(vector<int> &arr)
{
	vector<pair<int, int>> p;
    for(int i = 0; i < arr.size(); i++)
        p.push_back({arr[i], i});
    sort(p.begin(), p.end());
    int c = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(p[i].second == i)
            continue;
        else {
            c++;
            swap(p[i], p[p[i].second]);
            i--;
        }
    }
    return c;
}