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
class Solution {
public:
vector<int> q;
void inorder(TreeNode* root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
q.push_back(root->val);
    inorder(root->left);
    
   
    inorder(root->right);
}
    vector<int> preorderTraversal(TreeNode* root) {
         
        inorder(root);
        return q;

        
    }
};