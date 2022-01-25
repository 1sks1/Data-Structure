/*
Symmetric Binary Tree:

Given the root to a binary tree root,
return whether it is symmetric.
*/

// Good one.
// time Complexity : theta(logn)
 bool traverse(Tree* l,Tree* r)
 {
    if(l == NULL && r == NULL)
        return true;
    else if(l == NULL || r == NULL)
        return false;
    if(l->val != r->val)
        return false;
    return traverse(l->left,r->right) && traverse(l->right,r->left); 
    // it compares left child of left node with right child of right node
    // and right child of left node with left child of right node.
    
 }
bool solve(Tree* root) {
    if(root == NULL)
        return true;
    bool ans = traverse(root->left,root->right);
    return ans;

}