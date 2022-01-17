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
};