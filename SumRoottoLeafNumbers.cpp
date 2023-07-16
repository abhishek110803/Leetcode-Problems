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

vector<int> v;
    vector<vector<int>> s;
    int sum = 0;
    int observer = 0;
    void preorder(TreeNode *root)
    {
        
        if (root == NULL)
        {
            return;
        }

        
        v.push_back( root->val);
        preorder(root->left);
        preorder(root->right);
        if (root->left == NULL && root->right == NULL)
        {
            s.push_back(v);
            v.pop_back();
            
            
        }
        else
        {
        
            v.pop_back();
        }
    }



    int sumNumbers(TreeNode* root) {

          
        preorder(root);
       
      // vector<int> sm;
       int sum=0;

        cout<<s.size()<<endl;
       
       for( int i=0;i<s.size();i++){

           
           cout<<s[i].size()<<"size"<<i<<"->";
 
       for( int j=0;j<s[i].size();j++){

           int y=(s[i].size()-j-1);

        sum=sum+(s[i][j]* pow(10,y));

      //  sm.push_back(sum);

              cout<<s[i][j]<<",";
           
       }

       cout<<endl;

       }

       return sum;
        
    }

    
};