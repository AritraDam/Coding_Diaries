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
    void hi(TreeNode* root,vector<int>& x)
    {
        if(root==NULL)
            return;
        hi(root->left,x);
        x.push_back(root->val);
        hi(root->right,x);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> x;
        hi(root,x);
        for(int i=0;i<x.size()-1;i++)
        {
            if(x[i]>=x[i+1])
                return false;
        }
        return true;
    }
};