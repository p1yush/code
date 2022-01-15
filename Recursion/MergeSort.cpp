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


void merge(int array[], int const left, int const mid, int const right)
{
   auto const subArrayOne = mid - left + 1;
   auto const subArrayTwo = right - mid;

   auto *leftArray = new int[subArrayOne],
   *rightArray = new int[subArrayTwo];

   for (auto i = 0; i < subArrayOne; i++)
      leftArray[i] = array[left + i];
   for (auto j = 0; j < subArrayTwo; j++)
      rightArray[j] = array[mid + 1 + j];

   auto indexOfSubArrayOne = 0, 
        indexOfSubArrayTwo = 0; 
   int indexOfMergedArray = left; 

   while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
      if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
         array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
         indexOfSubArrayOne++;
      }
      else {
         array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
         indexOfSubArrayTwo++;
      }
      indexOfMergedArray++;
   }

   while (indexOfSubArrayOne < subArrayOne) {
      array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
      indexOfSubArrayOne++;
      indexOfMergedArray++;
   }

   while (indexOfSubArrayTwo < subArrayTwo) {
      array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
      indexOfSubArrayTwo++;
      indexOfMergedArray++;
   }
}

void mergeSort(int array[], int const begin, int const end)
{
   if (begin >= end)
      return; // Returns recursively

   auto mid = begin + (end - begin) / 2;
   mergeSort(array, begin, mid);
   mergeSort(array, mid + 1, end);
   merge(array, begin, mid, end);
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
   mergeSort(arr, 0, arr_size - 1);
   printArray(arr, arr_size);
}


int main()
{
   r_r_2();
   solve();
   return 0;
}