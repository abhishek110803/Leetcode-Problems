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
vector<int> a;
vector<int> b;

void preorder(TreeNode *root)
{
    // base case
    if (root == NULL)
    {  b.push_back(-1);
        return;
    }

    b.push_back(root->val);

    preorder(root->left);
    preorder(root->right);
}
void preorder1(TreeNode *root)
{
    // base case
    if (root == NULL)
    { a.push_back(-1);
        return;
    }

    a.push_back(root->val);

    preorder1(root->left);
    preorder1(root->right);
}
    bool isSameTree(TreeNode* p, TreeNode* q) {

        preorder1(p);
        preorder(q);

        int m=a.size();
        int n=b.size();
        if(a==b){return true;}
        return false;

    }
};