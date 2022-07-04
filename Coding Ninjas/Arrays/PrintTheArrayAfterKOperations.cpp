#include<bits/stdc++.h>
vector<int> printArrayAfterKOperations(vector<int> &Arr, int N, int K) {
       if(K == 0)
           return Arr;
       int max=*max_element(Arr.begin(),Arr.end());
       int min=*min_element(Arr.begin(),Arr.end());
       vector<int> oddarr(N);
       vector<int> evearr(N);
       for(int i = 0; i < N; i++)
           oddarr[i] = max - Arr[i];
       for(int i = 0; i < N; i++)
           evearr[i] = Arr[i] - min;
       if(K % 2 == 0)
           return evearr;
       return oddarr;
}
