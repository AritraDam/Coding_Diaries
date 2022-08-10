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
    TreeNode* v(int start,int end,vector<int>& nums)
    {
        TreeNode* root = new TreeNode(0);
        if(start == end)
        {
            root->val = nums[start-1];
            return  root;
        }
        else if(end-start==1)
        {
            root->val = nums[start-1];
            root->right = new TreeNode(nums[end-1]);
            return  root;
        }
        else
        {
            int n = (end+start)/2;
            root->val = nums[n-1];
            root->left = v(start,n-1,nums);
            root->right = v(n+1,end,nums);
            
            return root;
        }
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return v(1,nums.size(),nums);
    }
};