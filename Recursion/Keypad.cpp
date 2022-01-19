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


void keypad(vector<string> &ans, string output, string digits, string mapping[], int index) {
   if (index >= digits.size()) {
      ans.push_back(output);
      return;
   }
   int digit = digits[index] - '0';
   string value = mapping[digit];

   for (int i = 0; i < value.size(); i++) {
      output.push_back(value[i]);
      keypad(ans, output, digits, mapping, index + 1);
      output.pop_back();
   }
}


void solve() {
   string digits;
   cin >> digits;
   if (digits.size() == 0)
      cout << "";
   else {
      vector<string> ans;
      string output;
      string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
      keypad(ans, output, digits, mapping, 0);
      for (int i = 0; i < ans.size(); i++)
         cout << ans[i] << " ";
   }
}


int main()
{
   r_r_2();
   solve();
   return 0;
}