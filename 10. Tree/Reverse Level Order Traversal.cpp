<<<<<<< HEAD
vector<int> reverseLevelOrder(Node *root)
{
    vector<int> ans;
    if(root == NULL)
        return ans;
    queue< Node* > q;
    q.push(root);
    while(q.empty() == false)
    {
        Node* curr = q.front();
        ans.push_back(curr->data);
        q.pop();
        if(curr->right != NULL)
            q.push(curr->right);
        if(curr->left != NULL)
            q.push(curr->left);
    }
    reverse(ans.begin(),ans.end());
    return ans;
=======
vector<int> reverseLevelOrder(Node *root)
{
    vector<int> ans;
    if(root == NULL)
        return ans;
    queue< Node* > q;
    q.push(root);
    while(q.empty() == false)
    {
        Node* curr = q.front();
        ans.push_back(curr->data);
        q.pop();
        if(curr->right != NULL)
            q.push(curr->right);
        if(curr->left != NULL)
            q.push(curr->left);
    }
    reverse(ans.begin(),ans.end());
    return ans;
>>>>>>> d62f23cfcb0b1cba68c31d2a6b28ac38b40f9b3c
}