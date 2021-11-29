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
#define fr(n)           for(int j=n-1; j<=0; j--)fc
#define f(x,y)          for(int i=x; i<=y; i++)b
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
   vector<int> v1, v2;
   int sum = (n * (n + 1)) / 2;
   if (sum % 2 == 0) {
      cout << "YES" << endl;
      for (int i = 1; i <= n / 4; i++)
         v1.push_back(i);
      for (int i = n; i > n - (n / 4); i--)
         v1.push_back(i);
      for (int i = n / 4 + 1; i <= n - (n / 4); i++)\
         v2.push_back(i);
      for (auto it : v1)
         cout << it << " ";
      cout << endl;
      for (auto it : v2)
         cout << it << " ";
   }
   else
      cout << "NO";
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