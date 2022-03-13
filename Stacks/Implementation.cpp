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

class Stack {
   //properties
public:
   int *arr;
   int top;
   int size;

   // behaviour
   Stack(int size) {
      this -> size = size;
      arr = new int[size];
      top = -1;
   }

   void push( int element) {
      if (size - top > 1) {
         top++;
         arr[top] = element;
      }
      else {
         cout << "Stack OverFlow" << endl;
      }
   }

   void pop() {
      if (top >= 0 ) {
         top--;
      }
      else {
         cout << "Stack UnderFlow" << endl;
      }
   }

   int peek() {
      if (top >= 0 )
         return arr[top];
      else
      {
         cout << "Stack is Empty" << endl;
         return -1;
      }
   }

   bool isEmpty() {
      if ( top == -1) {
         return true;
      }
      else {
         return false;
      }
   }

};


void solve() {
   Stack st(5);

   st.push(22);
   st.push(43);
   st.push(44);
   st.push(22);
   st.push(43);
   st.push(44);

   cout << st.peek() << endl;

   st.pop();

   cout << st.peek() << endl;

   st.pop();

   cout << st.peek() << endl;

   st.pop();

   cout << st.peek() << endl;

   if (st.isEmpty()) {
      cout << "Stack is Empty mere dost " << endl;
   }
   else {
      cout << "Stack is not Empty mere dost " << endl;
   }
}


int main()
{
   r_r_2();
   solve();
   return 0;
}