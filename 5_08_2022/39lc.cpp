class Solution {
public:
    void Combination(vector<int>& candidates,int target,vector<int>currComb,int sum,int index,vector<vector<int>>& ans){
        if(sum>target)return;
        if(sum == target) {ans.push_back(currComb); return;}
        for(int i=index;i<candidates.size();i++)
        {
            currComb.push_back(candidates[i]);
            sum+=candidates[i];
            Combination(candidates,target,currComb,sum,i,ans);
            currComb.pop_back();
            sum-=candidates[i];
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>currComb;
        Combination(candidates,target,currComb,0,0,ans);
        return ans;
    }
};