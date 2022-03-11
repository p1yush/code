Node *copyList(Node *head)
    {
        Node *cloneHead = NULL;
        Node *cloneTail = NULL;
        Node *temp = head;
        while(temp != NULL) {
            InsertAtTail(cloneHead, cloneTail, temp -> data);
            temp = temp -> next;
        }
        Node *originalNode = head;
        Node *cloneNode = cloneHead;
        unordered_map<Node*, Node*> oldToNew;
        while(originalNode != NULL) {
            oldToNew[originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        originalNode = head;
        cloneNode = cloneHead;
        while(originalNode != NULL) {
            cloneNode -> arb = oldToNew[originalNode -> arb];
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        return cloneHead;
    }