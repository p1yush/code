vector<int> getTopView(TreeNode<int> *root) {
    vector<int> ans;
    if(!root)
        return ans;
    map<int, int> mp;
    queue<pair<int, TreeNode<int> *>> q;
    q.push({0, root});
    while(!q.empty()) {
        TreeNode<int>* node = q.front().second;
        int x = q.front().first;
        q.pop();
        if(mp.find(x) == mp.end())
            mp[x] = node -> val;
        if(node -> left)
            q.push({x - 1, node -> left});
        if(node -> right)
            q.push({x + 1, node -> right});
    }
    for(auto it: mp)
        ans.push_back(it.second);
    return ans;
}