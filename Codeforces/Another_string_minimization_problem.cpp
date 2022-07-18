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

void solve() {
   int n, m;
   cin >> n >> m;
   vector<int> a(n);
   for (int i = 0; i < n; i++)
      cin >> a[i];
   string s;
   for (int i = 0; i < m; i++)
      s.push_back('B');
   for (int i = 0; i < n; i++) {
      if (a[i] > m / 2) {
         int x = m + 1 - a[i];
         if (s[x - 1] == 'A')
            s[a[i] - 1] = 'A';
         else
            s[x - 1] = 'A';
      }
      else {
         int x = m + 1 - a[i];
         if (s[a[i] - 1] == 'A')
            s[x - 1] = 'A';
         else
            s[a[i] - 1] = 'A';
      }
   }
   cout << s;
}

int main()
{
   r_r_2();
   t(x) {
      solve();
      cout << endl;
   }
   return 0;
}