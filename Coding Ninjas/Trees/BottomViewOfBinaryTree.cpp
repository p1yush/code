vector<int> bottomView(BinaryTreeNode<int> *root) {
    vector<int> ans;
    if(!root)
        return ans;
    map<int, int> mp;
    queue<pair<int, BinaryTreeNode<int> *>> q;
    q.push({0, root});
    while(!q.empty()) {
        BinaryTreeNode<int>* node = q.front().second;
        int x = q.front().first;
        q.pop();
        mp[x] = node -> data;
        if(node -> left)
            q.push({x - 1, node -> left});
        if(node -> right)
            q.push({x + 1, node -> right});
    }
    for(auto it: mp)
        ans.push_back(it.second);
    return ans;
}