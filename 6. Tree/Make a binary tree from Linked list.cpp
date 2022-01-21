
/*
The structure of Link list Node is as follows
struct Node
{
    int data;
    struct node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
*/

//Function to make binary tree from linked list.
void convert(Node *head, TreeNode *&root) {
     queue<Node*>q;
     while(head != NULL)
     {
        q.push(head);
        head = head -> next;
     }
     Node * currlink;
     TreeNode *currtree;
     TreeNode* l,*r;
     queue<TreeNode*> qt;
     while(q.empty()==false)
     {
         if(root == NULL)
         {
             currlink = q.front();
             q.pop();
             root = new TreeNode(currlink -> data);
             qt.push(root);
         }
         else
         {
            currtree = qt.front();
            qt.pop();
            currlink = q.front();
            q.pop();
            l = new TreeNode(currlink -> data);
            currtree->left = l;
            qt.push(l);
            if(q.size()>0)
            {
                currlink = q.front();
                q.pop();
                r = new TreeNode(currlink -> data);
                currtree->right = r;
                qt.push(r);
            }
            
         }
     }
}
