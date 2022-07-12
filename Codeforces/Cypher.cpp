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
   int n;
   cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++)
      cin >> a[i];
   for (int i = 0; i < n; i++) {
      int ns;
      string s;
      cin >> ns >> s;
      unordered_map<char, int> mp;
      for (int j = 0; j < s.size(); j++)
         mp[s[j]]++;
      int d = mp['D'];
      int u = mp['U'];
      a[i] = a[i] + d;
      a[i] = a[i] - u;
      if (a[i] >= 10)
         a[i] %= 10;
      if (a[i] < 0)
         a[i] += 10;
   }
   for (int i = 0; i < a.size(); i++)
      cout << a[i] << " ";
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