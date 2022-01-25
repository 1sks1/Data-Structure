/*
Leaves in Same Level:

Given a binary tree root,
return whether all leaves are at the same level.

*/
// time complexity : theta(n).
 bool traverse(Tree* root, int &maxi, int curr)
 {
    if(root == NULL)
        return true;
    if(root -> left == NULL && root -> right == NULL)
    {
        if(maxi == -1)
        {
            maxi = curr; // it sets the maximum depth for a leaf node in maxi variable
        }
        return maxi == curr; // checks whether current leaf node's depth is same as maxi or not.
    }
    return traverse(root->left,maxi,curr+1) && traverse(root->right,maxi,curr+1); 
 }
bool solve(Tree* root) {
    int maxi = -1;
    int curr = 0;
    return traverse(root,maxi,curr);
}