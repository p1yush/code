#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;



#define ll              long long
#define pb              push_back
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n)       int *arr=new int[n];
#define t(x)            int t; cin>>t; while(t--)
#define fa(n)        for(int i=0; i<n; i++)
#define fr(n)           for(int j=n-1; j<=0; j--)
#define f(x,y)          for(int i=x; i<=y; i++)
#define vi(v, n)        vector<long long> v(n);



void r_r_2() {
   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}

bool isPossible(vector<int> arr, int n, int m, int mid) {
   int pageSum = 0;
   int student = 1;
   for (int i = 0; i < n; i++) {
      if (pageSum + arr[i] <= mid)
         pageSum += arr[i];
      else {
         student++;
         if (student > m || arr[i] > mid)
            return false;
         pageSum = arr[i];
      }
   }
   return true;
}


void solve() {
   int n, m, sum = 0;
   cin >> n >> m;
   vector<int> arr(n);
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
      sum += arr[i];
   }
   int s = 0, e = sum;
   int mid = s + (e - s) / 2;
   int ans = -1;
   while (s <= e) {
      if (isPossible(arr, n, m , mid)) {
         ans = mid;
         e = mid - 1;
      }
      else
         s = mid + 1;
      mid = s + (e - s) / 2;
   }
   cout << ans;
}


int main()
{
   r_r_2();
   solve();
   return 0;
}