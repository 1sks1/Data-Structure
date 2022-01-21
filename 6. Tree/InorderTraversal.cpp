// https://practice.geeksforgeeks.org/problems/inorder-traversal/1

struct Node
{
	int data;
	Node *left;
	Node *right;
	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

// Recursive Traversal:
// time complexity : O(n), Aux Space: O(h);


class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        vector<int> v;
        if(root == NULL)
            return v;
        v = inOrder(root->left);
        v.push_back(root->data);
        vector<int> later = inOrder(root->right);
        v.insert(v.end(),later.begin(),later.end());
        return v;
    }
};

// Iterative Traversal:
// time complexity : O(n), Aux Space: O(h);

class Solution {
public:
	vector<int> inOrder(Node *root)
	{
		vector<int> v;
		if(root == NULL)
			return v;
		stack<Node *> s;
	    Node *curr = root;
		while(curr!=NULL || s.empty() == false)
		{
		    while(curr != NULL)
		    {
		        s.push(curr);
		        curr = curr->left;
		    }
		    curr = s.top();
		    v.push_back(curr->data);
		    s.pop();
		    curr = curr->right;
		}
		return v;
	}
};