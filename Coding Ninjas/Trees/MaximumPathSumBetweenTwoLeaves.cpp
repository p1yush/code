long long int solve(TreeNode<int> *root, long long int &mx) {
    if(!root)
        return 0;
    if (!root->left && !root->right) 
        return root->val;
    long long int l = solve(root -> left, mx);
    long long int r = solve(root -> right, mx);
    mx = max(mx, l + r + root -> val);
    return root -> val + max(l, r);
    
}
long long int findMaxSumPath(TreeNode<int> *root)
{
    if(!root)
        return -1;
        if(!root -> left and !root -> right)

return -1;

if(!root -> left or !root -> right)

return -1;
    long long int mx = 0;
    solve(root, mx);
    return mx;
}