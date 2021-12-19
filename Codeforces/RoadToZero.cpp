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
   ll x, y, a , b;
   cin >> x >> y;
   cin >> a >> b;
   ll mn = min(x, y);
   ll t = abs(x - y);
   ll first = (x + y) * a;
   ll second = (mn * b) + (t * a);
   cout << min(first, second);
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