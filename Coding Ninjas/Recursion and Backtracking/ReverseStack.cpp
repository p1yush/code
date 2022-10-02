void insertAtBottom(stack<int> &stack, int num) {
    if(stack.empty()) {
        stack.push(num);
        return;
    }
    int x = stack.top();
    stack.pop();
    insertAtBottom(stack, num);
    stack.push(x);
} 

void reverseStack(stack<int> &stack) {
    if(stack.empty())
        return;
    int num = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack, num);
}