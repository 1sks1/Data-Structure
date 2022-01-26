/*
Largest Tree Sum Path:

Given a binary tree root,
return the largest sum of any path between any two nodes.

*/
// good question..IMP


int helper(Tree* root,int &maxi)
{
    if(root == NULL) 
    	return 0;
    int left = max(0 , helper(root -> left , maxi));  // left tells maximum sum value in left subtree. If left is negative then it becomes 0, which means left subtree should not be included.
    
    int right = max(0 , helper(root -> right , maxi)); // right tells maximum sum value in right subtree. If right is negative then it becomes 0, which means right subtree should not be included.
    
    maxi = max(maxi , root -> val + left + right);  // it updates maxi to maximum value by comparing left + root-> val + right value with current maxi.

    return root -> val + max(left , right);   // it returns maximum sum till current root from it's leaf nodes.
}

int solve(Tree* root) {
   int maxi = INT_MIN;  // make maxi as INT_MIN

   helper(root , maxi);

   return maxi;
}