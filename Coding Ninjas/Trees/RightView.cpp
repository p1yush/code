void solve(BinaryTreeNode<int>* root, vector<int> &ans, int l) {
    if(!root)
        return;
    if(ans.size() == l)
        ans.push_back(root -> data);
    solve(root -> right, ans, l + 1);
    solve(root -> left, ans, l + 1);
}

vector<int> printRightView(BinaryTreeNode<int>* root) {
    vector<int> ans;
    solve(root, ans, 0);
    return ans;    
}