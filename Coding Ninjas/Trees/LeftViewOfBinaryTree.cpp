void solve(BinaryTreeNode<int>* root, vector<int> &ans, int l) {
    if (!root) 
        return;
    if(ans.size() == l)
        ans.push_back(root -> data);
    solve(root -> left, ans, l + 1);
    solve(root -> right, ans, l + 1);
}

void printLeftView(BinaryTreeNode<int>* root) {
    vector<int> ans;
    solve(root, ans, 0);   
    for(auto it: ans)
        cout << it << " "; 
}