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

vector<string> s;
vector<int> v;




void preorder(TreeNode *root)
{
    // base case
    if (root == NULL)
    {
        return ;
    }

  
    v.push_back(root->val)  ;
    preorder(root->left );
    preorder(root->right);
    if( root->left==NULL && root->right==NULL ){
        
            std::ostringstream vts;

            if (!v.empty())
            {
                // Convert all but the last element to avoid a trailing ","
                std::copy(v.begin(), v.end()-1,
                          std::ostream_iterator<int>(vts, "->"));

                    

                // Now add the last element with no delimiter
               vts <<v.back();
            }

            std::cout << vts.str() << std::endl;
           // s.push_back(vts.str());


        s.push_back(vts.str());
        v.pop_back();

        
         }
    else{v.pop_back();}
}

    vector<string> binaryTreePaths(TreeNode* root) {

        preorder(root);
        return s;
        
    }
};