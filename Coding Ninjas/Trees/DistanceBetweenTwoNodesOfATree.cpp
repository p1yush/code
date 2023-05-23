#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
TreeNode<int>* LCA(TreeNode<int> *root, int node1, int node2) {
    if(!root)
        return NULL;
    if(root -> val == node1 || root -> val == node2)
        return root;
    TreeNode<int> *left = LCA(root -> left, node1, node2);
    TreeNode<int> *right = LCA(root -> right, node1, node2);
    if(!left)
        return right;
    else if(!right)
        return left;
    else 
        return root;
}

int solve(TreeNode<int> *root, int x) {
    if(!root)
        return 0;
    if(root -> val == x)
        return 1;
    int left = solve(root -> left, x);
    int right = solve(root -> right, x);
    if(!left && !right)
        return 0;
    else
        return left + right + 1;
}

int findDistanceBetweenNodes(TreeNode<int> *root, int node1, int node2)
{
    TreeNode<int> *lowcofa = LCA(root, node1, node2);
    int x = solve(lowcofa, node1);
    int y = solve(lowcofa, node2);
    if(x + y == 0)
        return -1;
    return x + y - 2;
}