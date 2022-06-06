void reverse(queue<int> &q) {
    if(q.empty()) {
        return;
    }
    int x = q.front();
    q.pop();
    reverse(q);
    q.push(x);
}
//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
   reverse(q);
   return q;
}