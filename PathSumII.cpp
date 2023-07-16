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
    vector<int> v;
    vector<vector<int>> s;
    int sum = 0;
    int observer = 0;
    void preorder(TreeNode *root, int targetsum)
    {
        // base case
        if (root == NULL)
        {
            return;
        }

        sum = sum + root->val;
        v.push_back( root->val);
        preorder(root->left, targetsum);
        preorder(root->right, targetsum);
        if (sum == targetsum && root->left == NULL && root->right == NULL)
        {
            s.push_back(v);
            v.pop_back();
            sum = sum - root->val;
            //observer = 1;
        }
        else
        {
            sum = sum - root->val;
            v.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {   if(root==NULL){return s;}
        preorder(root, targetSum);
        cout<<s.size()<<endl;
        return s;
    }
};