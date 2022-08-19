class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> m,x;
        for(auto &it:nums)
            m[it]++;
        for(auto &it:nums)
        {
            if(m[it]==0) continue;
            else if(x[it]>0)
            {
                x[it]--;
                m[it]--;
                
                x[it+1]++;
            }
            else if(m[it]>0 && m[it+1]>0 && m[it+2]>0)
            {
                m[it]--;
                m[it+1]--;
                m[it+2]--;
                
                x[it+3]++;
            }
            else return false;
        }
        return true;
    }
};