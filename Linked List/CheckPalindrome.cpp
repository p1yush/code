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

Node *LastElement(Node *head) {
   Node *tail = head;
   while (tail -> next != NULL) {
      tail = tail -> next;
   }
   return tail;
}

void print(Node* head) {
   Node *temp = head;
   while (temp != NULL) {
      cout << temp -> data << " ";
      temp = temp -> next;
   }
}

void insertAtTail(Node *&tail, Node *curr) {
   tail -> next = curr;
   tail = curr;
}


Node *getMid(Node *head) {
   Node *slow = head;
   Node *fast = head -> next;
   while (fast != NULL && fast -> next != NULL) {
      fast = fast -> next -> next;
      slow = slow -> next;
   }
   return slow;
}
Node *reverse(Node* head) {
   Node *curr = head;
   Node *prev = NULL;
   Node *forw = NULL;
   while (curr != NULL) {
      forw = curr -> next;
      curr -> next = prev;
      prev = curr;
      curr = forw;
   }
   return prev;
}

bool palindrome(Node *head) {
   if (head -> next == NULL)
      return true;
   Node *middle = getMid(head);
   Node *temp = middle -> next;
   middle -> next = reverse(temp);
   Node *head1 = head;
   Node *head2 = middle -> next;
   while (head2 != NULL) {
      if (head1 -> data != head2 -> data)
         return false;
      head1 = head1 -> next;
      head2 = head2 -> next;
   }
   temp = middle -> next;
   middle -> next = reverse(temp);
   return true;
}


void solve() {
   Node *head = takeInput();
   cout << palindrome(head);
}


int main()
{
   r_r_2();
   solve();
   return 0;
}