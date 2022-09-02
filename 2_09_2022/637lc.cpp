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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        double number=0;
        double count=0;
        vector<double> ans;
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            if(temp!=NULL){
                number+=temp->val;
                count++;
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
            else{
                ans.push_back((double)number/count);
                number =0;
                count =0;
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
        }
        return ans;
    }
};