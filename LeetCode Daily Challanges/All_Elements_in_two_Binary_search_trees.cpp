// 1305. All elements in two BST.
/*
 Given two binary search trees root1 and root2,
 return a list containing all the integers from both trees 
 sorted in ascending order.

 */
// Memory Efficient Solution
// T.C = O(NlogN) , where N = m+n;
// Aux space = O(1)
class Solution {
public:
    void inorder(TreeNode* root, vector<int> &ans)
    {
        if(root == NULL)
            return;
        inorder(root -> left, ans);
        ans.push_back(root -> val);
        inorder(root -> right, ans);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        inorder(root1, ans);
        inorder(root2, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};


// better Solution:
// T.C = O(N), where N = m+n;
// Aux Space = O(N) , N = m+n;

class Solution {
public:
    void inorder(TreeNode* root, vector<int> &ans)
    {
        if(root == NULL)
            return;
        inorder(root -> left, ans);
        ans.push_back(root -> val);
        inorder(root -> right, ans);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> ans1,ans2;
        inorder(root1, ans1);
        inorder(root2, ans2);
        vector<int> ans;
        int i =0, j =0;
        int s1 = ans1.size(), s2 = ans2.size();
        
        while(i != s1 && j != s2)
        {
            if(ans1[i] > ans2[j])
                ans.push_back( ans2[j++] );
            else if( ans1[i] < ans2[j])
                ans.push_back( ans1[i++] );
            else
            {
                ans.push_back( ans1[i++] );
                ans.push_back( ans2[j++] );
            }
                
        }
        if( i!= s1)
        {
            while( i != s1)
                ans.push_back( ans1[i++] );
        }
        else
        {
            while( j != s2)
            {
                ans.push_back( ans2[j++] );
            }
        }
        return ans;
    }
};

// Efficient Solution
// Time Complexity : O(N), N = m+n;
// Aux Space : O(H), where H = h1(height of 1st BST) + h2( height of 2nd BST);

class Solution
{
public:
     vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
     {
          vector<int> res;
          stack<TreeNode *> s1, s2;
          while (root1 || root2 || !s1.empty() || !s2.empty())
          {
               while (root1 != NULL)
               {
                    s1.push(root1);
                    root1 = root1->left;
               }
               while (root2 != NULL)
               {
                    s2.push(root2);
                    root2 = root2->left;
               }
               if (s2.empty() || (!s1.empty() && s1.top()->val <= s2.top()->val))
               {
                    root1 = s1.top();
                    s1.pop();
                    res.push_back(root1->val);
                    root1 = root1->right;
               }
               else
               {
                    root2 = s2.top();
                    s2.pop();
                    res.push_back(root2->val);
                    root2 = root2->right;
               }
          }
          return res;
     }
};
