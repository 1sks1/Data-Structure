<<<<<<< HEAD
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node==NULL)
            return 0;
        int left_height = height(node->left);
        int right_height = height(node->right);
        return 1+max(left_height,right_height);
    }
=======
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node==NULL)
            return 0;
        int left_height = height(node->left);
        int right_height = height(node->right);
        return 1+max(left_height,right_height);
    }
>>>>>>> d62f23cfcb0b1cba68c31d2a6b28ac38b40f9b3c
};