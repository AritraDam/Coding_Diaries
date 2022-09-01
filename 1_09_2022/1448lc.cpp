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
    int a=0,b=0;
    int x(TreeNode* root,int largest)
    {
        if(root==NULL) return 0;
        
        if(root->val>=largest)
        {
            largest=root->val;
            return 1+x(root->left,largest)+x(root->right,largest);
        }
        else
            return x(root->left,largest)+x(root->right,largest);
        
    }
    int goodNodes(TreeNode* root) {
        return x(root,root->val);
    }
};