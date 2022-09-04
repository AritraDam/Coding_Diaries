class Solution {
public:
    static bool comparex(pair<int,int>a,pair<int,int>b)
    {
        if(a.second==b.second) return a.first<b.first;
        return a.second<b.second;
    }
    void delta(TreeNode* root,map<int,vector<pair<int,int>>> &m,int c,int h)
    {
        if(root==NULL) return;
        delta(root->left,m,c-1,h+1);
        m[c].push_back(make_pair(root->val,h));
        delta(root->right,m,c+1,h+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<pair<int,int>>> m;
        vector<vector<int>> x;
        delta(root,m,0,0);
        for(auto &it:m)
        {
            sort(it.second.begin(),it.second.end(),comparex);
            vector<int>z;
            for(auto &y:it.second)
                z.push_back(y.first);
            x.push_back(z);
        }
        return x;
    }
};