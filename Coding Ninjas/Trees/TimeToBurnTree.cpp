#include <unordered_map>
/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int BurnTree(BinaryTreeNode<int>* node, unordered_map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> parent) {
    unordered_map<BinaryTreeNode<int>*, bool> visited;
    queue<BinaryTreeNode<int>*> q;
    q.push(node);
    visited[node] = true;
    int timer = 0;
    while(!q.empty()) {
        int size = q.size();
        int fl = 0;
        for(int i = 0; i < size; i++) {
            auto curr = q.front();
            q.pop();
            if(curr -> left && !visited[curr -> left]) {
                fl = 1;
                q.push(curr -> left);
                visited[curr -> left] = true;
            }
            if(curr -> right && !visited[curr -> right]) {
                fl = 1;
                q.push(curr -> right);
                visited[curr -> right] = true;
            }
            if(parent[curr] && !visited[parent[curr]]) {
                fl = 1;
                q.push(parent[curr]);
                visited[parent[curr]] = true;
            }
        }
        if(fl)
            timer++;
    }
    return timer;
}

BinaryTreeNode<int>* makeParents(BinaryTreeNode<int>* root, unordered_map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> &parent, int start) {
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    BinaryTreeNode<int> *node;
    while(!q.empty()) {
        BinaryTreeNode<int> *curr = q.front();
        q.pop();
        if(curr -> data == start)
            node = curr;
        if(curr -> left) {
            q.push(curr -> left);
            parent[curr -> left] = curr;
        }
        if(curr -> right) {
            q.push(curr -> right);
            parent[curr -> right] = curr;
        }
    }
    return node;
}

int timeToBurnTree(BinaryTreeNode<int>* root, int start)
{
    unordered_map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> parent;
    BinaryTreeNode<int>* node = makeParents(root, parent, start);
    int time = BurnTree(node, parent);
    return time;
}
