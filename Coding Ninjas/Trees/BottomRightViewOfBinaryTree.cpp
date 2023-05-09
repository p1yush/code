void solve(BinaryTreeNode<int>* root, map<int, int> &mp, int l) {
    if(!root)
        return;
    mp[l] = root -> data;
    solve(root -> left, mp, l + 1);
    solve(root -> right, mp, l);
}

vector<int> bottomRightView(BinaryTreeNode<int>* root) {
    vector<int> ans;
    map<int, int> mp;
    solve(root, mp, 0);
    for(auto it: mp)
        ans.push_back(it.second);
    sort(ans.begin(), ans.end());
    return ans;
}