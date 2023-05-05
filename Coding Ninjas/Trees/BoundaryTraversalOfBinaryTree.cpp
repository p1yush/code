bool isLeaf(TreeNode<int>* root) {
    if(root -> left == NULL && root -> right == NULL)
        return true;
    return false;
}
void leftBoundary(TreeNode<int> *root, vector<int> &ans) {
    TreeNode<int> *curr = root;
    while(curr != NULL) {
        if(!isLeaf(curr))
            ans.push_back(curr -> data);
        if(curr -> left)
            curr = curr -> left;
        else 
            curr = curr -> right;
    }
}
void rightBoundary(TreeNode<int> *root, vector<int> &ans) {
    TreeNode<int> *curr = root;
    vector<int> temp;
    while(curr != NULL) {
        if(!isLeaf(curr))
            temp.push_back(curr -> data);
        if(curr -> right)
            curr = curr -> right;
        else 
            curr = curr -> left;
    }
    for(int i = temp.size() - 1; i >= 0; i--)
        ans.push_back(temp[i]);
}
void addleaves(TreeNode<int> *root, vector<int> &ans) {
    if(isLeaf(root)) {
        ans.push_back(root -> data);
        return;
    }
    if(root -> left)
        addleaves(root -> left, ans);
    if(root -> right)
        addleaves(root -> right, ans);
}
vector<int> traverseBoundary(TreeNode<int>* root){
    vector<int> ans;
    if(root == NULL)
        return ans;
    if(!isLeaf(root))
        ans.push_back(root -> data);
    leftBoundary(root -> left, ans);
    addleaves(root, ans);
    rightBoundary(root -> right, ans);
}