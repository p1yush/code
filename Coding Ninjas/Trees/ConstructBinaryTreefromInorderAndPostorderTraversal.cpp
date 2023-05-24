TreeNode<int>* building(vector<int> &postOrder, int postStart, int postEnd, 
vector<int> &inOrder, int inStart, int inEnd, unordered_map<int, int> &mp) {
     if(inStart > inEnd || postStart > postEnd)
          return NULL;
     TreeNode<int>* root = new TreeNode<int>(postOrder[postEnd]);
     int inRoot = mp[root -> data];
     int numsleft = inRoot - inStart;
     root -> left = building(postOrder, postStart, postStart + numsleft - 1, inOrder,
     inStart, inRoot - 1, mp);
     root -> right = building(postOrder, postStart + numsleft, postEnd - 1, inOrder,
     inRoot + 1, inEnd, mp);
     return root;
}

TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	unordered_map<int, int> mp;
     for(int i = 0; i < inOrder.size(); i++)
          mp[inOrder[i]] = i;
     TreeNode<int>* root = building(postOrder, 0, postOrder.size() - 1, inOrder, 0, 
     inOrder.size() - 1, mp);
     return root;
}