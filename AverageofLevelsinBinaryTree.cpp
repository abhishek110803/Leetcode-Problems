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

double sum=0;
double count=0;
vector<double> v;

void levelOrderTraversal(TreeNode *root)
{ if(root==NULL){return;}
    queue<TreeNode *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    { 
        TreeNode *temp = q.front();
        q.pop();

        if (temp == NULL)
        { v.push_back( sum/count);
        sum=0;
        count=0;
            // purana level complete traverse ho chuka hai
            
            if (!q.empty())
            {
                // queue still has some child ndoes
                q.push(NULL);
            }
        }
        else
        {  
           sum=sum+temp->val;
           count++;
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
    vector<double> averageOfLevels(TreeNode* root) {

        levelOrderTraversal(root);
        return v;
        
    }
};