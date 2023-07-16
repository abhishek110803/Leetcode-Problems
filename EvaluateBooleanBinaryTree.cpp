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
    int preorder(TreeNode *root)
    {
        // base case
        if (root == NULL)
        {
            return 1;
        }

        int p = preorder(root->left);
        int q = preorder(root->right);
        cout << p << "'" << q << "'" << root->val << endl;
        if (p == 1 && q == 1 && root->val == 0)
        {
            return 0;
        }
        if (p == 1 && q == 1 && root->val == 1)
        {
            return 1;
        }
        if (p == 1 && q == 1 && root->val == 3)
        {
            return 1;
        }
        else if (root->val == 3)
        {
            return 0;
        }
        if (p == 0 && q == 0 && root->val == 2)
        {
            return 0;
        }
        else if (root->val == 2)
        {
            return 1;
        }
        return 0;
    }

    bool evaluateTree(TreeNode *root)
    {
        int m = preorder(root);
        cout << m << endl;
        if (m == 1)
        {
            return true;
        }
        return false;
    }
};