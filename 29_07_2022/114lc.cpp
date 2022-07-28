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
TreeNode* rightMost(TreeNode* root)
{
    if(root->right == NULL)
        return root;
    return rightMost(root->right);
}
class Solution {
public:
    void flatten(TreeNode* root) {
        
        while(root)
        {
        TreeNode* nextR;
        TreeNode* rightM;
        if(root->left)
        {
            rightM = rightMost(root->left);
            nextR= root->right;
            root->right=root->left;
            root->left=NULL;
            rightM->right = nextR;
        }
            root= root->right;
        }
    }
};