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
int sum=0;
void solve(TreeNode* root,int a)
{
   if(!root)
    {
        return;
    }
    if(root->left==NULL  && root->right==NULL)
    {
        if(a==0)
        {
            sum+=root->val;
        }
        return;
    }
   
     
    // cout<<root->val;
      solve(root->left,0);
     solve(root->right,1);
    return ;
}
    int sumOfLeftLeaves(TreeNode* root) {
        solve(root,2);
        return sum;
    }
};