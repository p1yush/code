    void InsertAtTail(Node *&head, Node *&tail, int data) {
        Node *newNode = new Node(data);
        if(head == NULL) {
            tail = newNode;
            head = newNode;
            return;
        }
        else {
            tail -> next = newNode;
            tail = newNode;
        }
    }
    public:
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
        
        while(originalNode != NULL && cloneNode != NULL) {
            Node *forw = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = forw;
            
            forw = cloneNode -> next;
            cloneNode -> next = originalNode;
            cloneNode = forw;
        }
        
        temp = head;
        while(temp != NULL) {
            if(temp -> next != NULL) 
                temp -> next -> arb = temp -> arb ? temp -> arb -> next : temp -> arb;
            temp = temp -> next -> next;
        }
        
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL) {
            originalNode -> next = cloneNode -> next;
            originalNode = originalNode -> next;
            if(originalNode != NULL)
                cloneNode -> next = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        return cloneHead;
    }