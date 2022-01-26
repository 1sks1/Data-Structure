<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *left;
    node *right;
    node(int d)
    {
        val = d;
        left = NULL;
        right = NULL;
    }
};
void inorder(node *root)
{
    if(root==NULL)
        return ;
    inorder(root->left);
    cout<<root->val<<' ';
    inorder(root->right);
}
node* mirror(node* root)
{
    if(root==NULL)
        return NULL;
    node *l = mirror(root->left);
    node *r = mirror(root->right);
    root->left = r;
    root->right = l;
    return root;
}
int main()
{
    node *root = new node(5);
    root->left = new node(3);
    root->right = new node(8);
    root->left->left = new node(10);
    root->left->right = new node(20);
    root->right->left = new node(30);
    root->right->right = new node(40);
    inorder(root);
    cout<<endl;
    root = mirror(root);
    inorder(root);
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *left;
    node *right;
    node(int d)
    {
        val = d;
        left = NULL;
        right = NULL;
    }
};
void inorder(node *root)
{
    if(root==NULL)
        return ;
    inorder(root->left);
    cout<<root->val<<' ';
    inorder(root->right);
}
node* mirror(node* root)
{
    if(root==NULL)
        return NULL;
    node *l = mirror(root->left);
    node *r = mirror(root->right);
    root->left = r;
    root->right = l;
    return root;
}
int main()
{
    node *root = new node(5);
    root->left = new node(3);
    root->right = new node(8);
    root->left->left = new node(10);
    root->left->right = new node(20);
    root->right->left = new node(30);
    root->right->right = new node(40);
    inorder(root);
    cout<<endl;
    root = mirror(root);
    inorder(root);
    return 0;
>>>>>>> d62f23cfcb0b1cba68c31d2a6b28ac38b40f9b3c
}