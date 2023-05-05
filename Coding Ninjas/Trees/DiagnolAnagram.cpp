void diagnolFill(map<int, set<int>> &mp, int l, BinaryTreeNode<int>* root) {
	if(root == NULL)
		return;
	mp[l].insert(root -> data); 
	diagnolFill(mp, l + 1, root -> left);
	diagnolFill(mp, l, root -> right);
}

bool diagonalAnagram(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
	map<int, set<int>> mp1, mp2;
	diagnolFill(mp1, 0, root1);
	diagnolFill(mp2, 0, root2);
	return mp1 == mp2;
}
