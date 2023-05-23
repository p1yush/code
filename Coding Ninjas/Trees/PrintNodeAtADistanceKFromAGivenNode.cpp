#include <unordered_map>
/*************************************************************

    Following is the Binary Tree node structure for reference:

    class BinaryTreeNode{
	public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void markParent(BinaryTreeNode<int>* root, unordered_map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> &parent) {
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int>* node = q.front();
        q.pop();
        if(node -> left) {
            q.push(node -> left);
            parent[node -> left] = node;
        }
        if(node -> right) {
            q.push(node -> right);
            parent[node -> right] = node;
        }
    }
}

vector<BinaryTreeNode<int>*> printNodesAtDistanceK(BinaryTreeNode<int>* root, BinaryTreeNode<int>* target, int K) {
    unordered_map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> parent;
    markParent(root, parent);
    unordered_map<BinaryTreeNode<int>*, bool> visited;
    queue<BinaryTreeNode<int>*> q;
    q.push(target);
    visited[target] = true;
    int distance = 0;
    while(!q.empty()) {
        if(distance == K)
            break;
        distance++;
        int size = q.size();
        for(int i = 0; i < size; i++) {
            BinaryTreeNode<int>* curr = q.front();
            q.pop();
            if(curr -> left && !visited[curr -> left]) {
                q.push(curr -> left);
                visited[curr -> left] = true;
            }
            if(curr -> right && !visited[curr -> right]) {
                q.push(curr -> right);
                visited[curr -> right] = true;
            }
            if(parent[curr] && !visited[parent[curr]]) {
                q.push(parent[curr]);
                visited[parent[curr]] = true;
            }
        }
    }
    vector<BinaryTreeNode<int>*> ans;
    while(!q.empty()) {
        ans.push_back(q.front());
        q.pop();
    }
    return ans;
}