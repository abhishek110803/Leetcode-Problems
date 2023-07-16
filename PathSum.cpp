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
int observer=0;
void preorder(TreeNode *root,int targetsum)
{
    // base case
    if (root == NULL)
    {
        return ;
    }

    sum=sum+ root->val;   
    preorder(root->left,targetsum);
    preorder(root->right,targetsum);
    if(sum==targetsum && root->left==NULL && root->right==NULL ){ observer=1;}
    else{sum=sum-root->val;}
}


    bool hasPathSum(TreeNode* root, int targetSum) {

       preorder(root,targetSum);
        if(observer==1){return true;}
        return false;
        
    }
};