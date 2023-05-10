#include <unordered_map>
vector<long long> maxProductCount(vector<int> &arr, int n) { 
    unordered_map<long long, long long> a; 
    vector<long long> ans; 
    for(int i = 0; i < arr.size(); i++)
      for (int j = i + 1; j < arr.size(); j++) {
        long long a1 = arr[i];
        long long a2 = arr[j];
        a[a1 * a2]++;
      }
    long long freq = 0;
    long long maxProd = 0;
    for (pair<long long, long long> element : a) {
        if(element.second >= freq) {
            if(element.second == freq) 
                maxProd = min(maxProd, element.first); 
            else 
                maxProd = element.first;
        freq = element.second;
        } 
    } 
    if(freq > 1) {
        freq = ((freq * (freq - 1))) / 2;
        ans.push_back(maxProd); 
        ans.push_back(freq); 
    }
    else { 
        ans.push_back(0);
        ans.push_back(0);
    }
    return ans; 
} 