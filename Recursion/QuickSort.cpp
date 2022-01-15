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

int partition (int a[], int start, int end)
{
   int pivot = a[end]; // pivot element
   int i = (start - 1);

   for (int j = start; j <= end - 1; j++)
   {
      if (a[j] < pivot)
      {
         i++; 
         int t = a[i];
         a[i] = a[j];
         a[j] = t;
      }
   }
   int t = a[i + 1];
   a[i + 1] = a[end];
   a[end] = t;
   return (i + 1);
}

void quick(int a[], int start, int end) 
{
   if (start < end)
   {
      int p = partition(a, start, end); 
      quick(a, start, p - 1);
      quick(a, p + 1, end);
   }
}

void printArray(int A[], int size)
{
   for (auto i = 0; i < size; i++)
      cout << A[i] << " ";
}


void solve() {
   int arr_size;
   cin >> arr_size;
   int arr[arr_size];
   for (int i = 0; i < arr_size; i++)
      cin >> arr[i];
   quick(arr, 0, arr_size - 1);
   printArray(arr, arr_size);
}


int main()
{
   r_r_2();
   solve();
   return 0;
}