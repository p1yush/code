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
   string s;
   cin >> s;
   int count = 0;
   char oddchar;
   unordered_map<char, int>mp;
   for (int i = 0; i < s.length(); i++)
      mp[s[i]]++;
   for (auto it : mp)
      if (it.second % 2 != 0) {
         count++;
         oddchar = it.first;
      }
   string first = "";
   string second = "";
   for (auto it : mp) {
      string str(it.second / 2, it.first);
      first = first + str;
      second = str + second;
   }
   if (count > 1 || count == 1 && s.length() % 2 == 0)
      cout << "NO SOLUTION";
   else if (count == 1)
      cout << first + oddchar + second;
   else
      cout << first + second;
}



int main()
{
   r_r_2();
   solve();
   return 0;
}