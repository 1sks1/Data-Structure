class Solution {
  public:
    int maxi =0;
    int find_max(struct Node* root)
    {
        if(root==NULL)
            return 0;
        int max_left = find_max(root->left);
        int max_right = find_max(root->right);
        maxi = max(maxi,max_left+max_right+1);
        return max(max_left,max_right)+1;
    }
    int diameter(struct Node* root) {
        int x = find_max(root);
        return maxi;
    }
    };