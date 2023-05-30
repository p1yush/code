void fx(TreeNode<int>* root, int l, int &sum, int &mx) {
    if(root == NULL)
        return;
    if(root -> left == NULL && root -> right == NULL) {
        if(l == mx)
            sum += root -> data;
        else if(l > mx) {
           sum = root -> data;
           mx = l;
       }
       return;
   }
    fx(root -> left, l+1, sum, mx);
    fx(root -> right, l+1, sum, mx);
    return;
}

int deepestLeavesSum(TreeNode<int>* root) {
   int l = 0, sum = 0, mx = 0;
   fx(root, l, sum, mx);
   return sum;
}