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

vector<int>leftma;
vector<int>rightma;
vector<int>diameter;
 

  //  int diameter = 0;
    int temp = 0;
    

    void preorderleft(TreeNode *root, int count, int leftmax)
    {
        // base case
        if (root == NULL)
        {
            return;
        }

        // v.push_back(root->val);
        count++;
        preorderleft(root->left, count, leftmax);
        preorderleft(root->right, count, leftmax);
        if (root->left == NULL && root->right == NULL)
        {

            // s.push_back(v);
            if (count > leftma[0])
            {leftma.pop_back();
                leftma.push_back(count);

                cout << leftma[0] << "lt" << endl;
            }
            // v.pop_back();
            count--;
        }
        else
        { // v.pop_back();
            count--;
        }
    }

    void preorderright(TreeNode *root, int count1, int rightmax)
    {
        // base case
        if (root == NULL)
        {
            return;
        }

        // v.push_back(root->val);
        count1++;
        preorderright(root->left, count1, rightmax);
        preorderright(root->right, count1, rightmax);
        if (root->left == NULL && root->right == NULL)
        {

            // s.push_back(v);
            if (count1 > rightma[0])
            { rightma.pop_back();
                rightma.push_back(count1);
               // rightma[0] = count1;
                cout << rightma[0] << "rt" << endl;
            }
            // v.pop_back();
            count1--;
        }
        else
        { // v.pop_back();
            count1--;
        }
    }
    void diameterBinaryTree(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << "root->val" << root->val << endl;

        int leftmax = 0;
        int rightmax = 0;
        int count = 0;
        int count1 = 0;
     if(leftma.size()!=0){leftma.pop_back();}
       if(rightma.size()!=0){rightma.pop_back();}
     // if(diameter.size()!=0) {diameter.pop_back();}
        
         leftma.push_back(0);
    rightma.push_back(0);
  
        preorderleft(root->left, count, leftmax);
        preorderright(root->right, count1, rightmax);

        temp = leftma[0] + rightma[0];
        cout << leftma[0] << "<-->" << rightma[0] << endl;

        //cout << root->val << "--" << temp << endl;

        if (temp > diameter[0])
        {  cout<<"temp"<<temp<<endl;
              diameter.pop_back();
            diameter.push_back(temp);
        }

        cout << "------------------------------------------------------------" << endl;

        diameterBinaryTree(root->left);
        diameterBinaryTree(root->right);
    }

    int diameterOfBinaryTree(TreeNode *root)
    { diameter.push_back(0);
       
        
         diameterBinaryTree(root);
    return diameter[0];


    }
}

;
