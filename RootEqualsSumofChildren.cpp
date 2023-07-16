/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
 public:
    int sum = 0;

        void postorder(TreeNode * root)
    {
        // base case
        if (root == NULL)
        {
            return;
        }

        postorder(root->left);
        postorder(root->right);
        // cout << root->val << " ";
        sum = sum + root->val;
    }
    
    bool checkTree(TreeNode *root)
    {
        postorder(root);

        if (sum - root->val == root->val)
        {
            return true;
        }
        return false;
    }
};