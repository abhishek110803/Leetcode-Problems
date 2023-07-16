/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:

int count=0;
int count1=0;
int count3=0;
void postorder(TreeNode *root,TreeNode *target)
{  count++;
    if(root==target){count3=count; }
    
    if (root == NULL)
    {
        return;
    }

    cout << root->val << " ";
    postorder(root->left,target);
    postorder(root->right,target);
   
}

void postorder1(TreeNode *root)
{  count1++;
    if(count1==count3){tar=root; }
    
    if (root == NULL)
    {
        return;
    }

    cout << root->val << " ";
    postorder1(root->left);
    postorder1(root->right);
   
}



 TreeNode* tar=NULL;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {

postorder(original,target);
 postorder1(cloned);
 return tar;
        
    }
};