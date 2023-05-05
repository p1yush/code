vector<int> reverseLevelOrder(TreeNode<int> *root){
    vector<int> ans;
    if(root == NULL)
        return ans;
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode<int>* node = q.front();
        q.pop();
        if(node -> left)
            q.push(node -> left);
        if(node -> right)
            q.push(node -> right);
        ans.push_back(node -> val);
    }
    for(int i = 0; i < ans.size() / 2; i++)
        swap(ans[i], ans[ans.size() - i - 1]);
    return ans;
}