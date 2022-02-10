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

class Node {
public:
   int data;
   Node* next;

   Node(int data) {
      this -> data = data;
      this -> next = NULL;
   }
};

Node *takeInput() {
   int data;
   cin >> data;
   Node *head = NULL;
   Node *tail = NULL;
   while (data != -1) {
      Node *newNode = new Node(data);
      if (head == NULL) {
         head = newNode;
         tail = newNode;
      }
      else {
         tail -> next = newNode;
         tail = newNode;
      }
      cin >> data;
   }
   return head;
}

void print(Node* head) {
   Node *temp = head;
   while (temp != NULL) {
      cout << temp -> data << " ";
      temp = temp -> next;
   }
}


Node *ReverseLLinKGroup(Node *head, int k) {
   if (head == NULL)
      return head;
   Node *forward = NULL;
   Node *curr = head;
   Node *prev = NULL;
   int count = 0;
   while (curr != NULL && count < k) {
      forward = curr -> next;
      curr -> next = prev;
      prev = curr;
      curr = forward;
      count++;
   }
   if (forward != NULL)
      head -> next = ReverseLLinKGroup(forward, k);
   return prev;
}


void solve() {
   int k;
   cin >> k;
   Node *head = takeInput();
   Node *prev = ReverseLLinKGroup(head, k);
   print(prev);
}


int main()
{
   r_r_2();
   solve();
   return 0;
}