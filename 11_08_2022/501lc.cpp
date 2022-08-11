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
    void hi(TreeNode* root,unordered_map<int,int>& m)
    {
        if(root==NULL)
            return;
        hi(root->left,m);
        m[root->val]++;
        hi(root->right,m);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>x;
        int Max=1;
        unordered_map<int,int> m;
        hi(root,m);
        for(auto &it: m)
            Max= max(Max,it.second);
        for(auto &it:m){
         if(it.second==Max)
                x.push_back(it.first);   
        }   
        return x;
    }
};