TreeNode<int> *building(vector<int> &inorder, int inStart, int inEnd,
vector<int> &preorder, int preStart, int preEnd, unordered_map<int, int>& mp) {
    if(preStart > preEnd || inStart > inEnd)
        return NULL;
    TreeNode<int> *root = new TreeNode<int>(preorder[preStart]);
    int inRoot = mp[root -> data];
    int numsleft = inRoot - inStart;
    root -> left = building(inorder, inStart, inRoot - 1, preorder, preStart + 1, 
    preStart + numsleft, mp);
    root -> right = building(inorder, inRoot + 1, inEnd, preorder,
    preStart + numsleft + 1, preEnd, mp);
    return root;
}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
    unordered_map<int, int> mp;
    for(int i = 0; i < inorder.size(); i++)
        mp[inorder[i]] = i;
    TreeNode<int>* root = building(inorder, 0, inorder.size() - 1, preorder, 0, preorder.size() - 1, mp);
    return root;
}