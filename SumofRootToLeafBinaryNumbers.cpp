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
vector<vector<int>>s;
vector<int> v;
        void preorder(TreeNode *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    v.push_back(root->val);
    preorder(root->left);
    preorder(root->right);
    if(root->left==NULL && root->right==NULL){ s.push_back(v);
    v.pop_back();}
    else{v.pop_back();}

}


    int sumRootToLeaf(TreeNode* root) {

        if(root->left==NULL && root->right==NULL ){ return root->val;}

        preorder(root);
        cout<<s.size();

        for(int i=0;i<s.size();i++){
            cout<<"elements of index "<<i <<";";

            for(int j=0;j<s[i].size();j++){

                sum=sum+s[i][j]*pow(2,s[i].size()-1-j);
               
            
              }

        //cout<<endl<<"sum  : "<<sum<<endl;
        }

return sum;
        
    }
};