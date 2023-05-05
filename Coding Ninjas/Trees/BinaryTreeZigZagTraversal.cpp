vector<int> spiralOrder(BinaryTreeNode<int> *root)
{
	    vector<int> ans;
    	if(root == NULL)
    	    return ans;
    	queue<BinaryTreeNode<int> *> q;
    	int flag = 0;
    	q.push(root);
    	while(!q.empty()) {
    	    int size = q.size();
    	    vector<int> a(size);
    	    for(int i = 0; i < size; i++) {
    	        BinaryTreeNode<int>* root = q.front();
    	        if(flag == 0)
    	            a[i] = root -> data;
    	        else 
    	            a[size - i - 1] = root -> data;
    	        if(root -> left != NULL)
    	            q.push(root -> left);
    	        if(root -> right != NULL)
    	            q.push(root -> right);
    	        q.pop();
    	    }
    	    if(flag == 0)
    	       flag = 1;
    	    else 
    	        flag = 0;
    	   ans.insert(ans.end(), a.begin(), a.end());
    	}
    	return ans;
}