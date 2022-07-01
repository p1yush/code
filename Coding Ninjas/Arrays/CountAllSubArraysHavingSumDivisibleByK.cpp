int subArrayCount(vector<int> &arr, int k) {
    unordered_map<int, int> mp;
    mp.insert({ 0, 1});
    long long sum = 0, count = 0;
    for(int i = 0; i < arr.size(); i++) {
        sum = sum + arr[i];
        int rem = sum % k;
        if(rem < 0)
            rem += k;
        if(mp[rem]) {
            count += mp[rem];
            mp[rem]++;
        }
        else
            mp[rem]++;
    }
    return count;
}