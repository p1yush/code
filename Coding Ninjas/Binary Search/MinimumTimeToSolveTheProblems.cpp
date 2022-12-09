bool isPossible(vector<int> &subjects, int k, long long int mid) {
    long long int dost = 1, sub = 0;
    for(int i = 0; i < subjects.size(); i++) {
        if(subjects[i] + sub <= mid)
            sub += subjects[i];
        else {
            dost++;
            if(dost > k || subjects[i] > mid)
                return false;
            sub = subjects[i];
        }
    }
    return true;
}

long long int minimumRequiredTime(vector<int> &subjects, int k)
{
	long long int s = 0, e = 0;
    for(int i = 0; i < subjects.size(); i++)
        e += subjects[i];
    long long int ans = -1;
    long long int mid = s + (e - s) / 2;
    while(s <= e) {
        if(isPossible(subjects, k, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else 
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}