void insertAtTail(Node *head, Node *tail, int val) {
   Node *temp = new Node(val);
   if (head == NULL) {
      head = temp;
      tail = temp;
      return;
   }
   else {
      tail -> next = temp;
      tail = temp;
   }
}

Node *add(Node *first, Node *second) {
   int carry = 0;
   Node *ansHead = NULL;
   Node *ansTail = NULL;
   while (first != NULL || second != NULL || carry != 0) {
      int val1 = 0;
      if (first != NULL)
         val1 = first -> data;

      int val2 = 0;
      if (second != NULL)
         val2 = second -> data;

      int sum = carry + first -> data + second -> data;
      int digit = sum % 10;
      insertAtTail(ansHead, ansTail, digit);
      carry = sum / 10;

      if (first != NULL)
         first = first -> next;

      if (second != NULL)
         second = second -> next;
   }
   return ansHead;
}