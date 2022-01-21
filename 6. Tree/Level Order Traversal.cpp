<<<<<<< HEAD
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        vector<int>ans;
        if(node==NULL)
            return ans;
        queue<Node*>q;
        q.push(node);
        while(!q.empty())
        {
            Node *curr = q.front();
            q.pop();
            ans.push_back(curr->data);
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        return ans;
    }
=======
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        vector<int>ans;
        if(node==NULL)
            return ans;
        queue<Node*>q;
        q.push(node);
        while(!q.empty())
        {
            Node *curr = q.front();
            q.pop();
            ans.push_back(curr->data);
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        return ans;
    }
>>>>>>> d62f23cfcb0b1cba68c31d2a6b28ac38b40f9b3c
};