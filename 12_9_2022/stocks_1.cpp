class Solution {
public:
    int maxProfit(vector<int>& p) {
        vector<int> large;
        int ans =0;
        int nMin = p[0];
        // large.push_back(p[0]);
        for(int i=1;i<p.size();i++)
        {
            if(nMin>p[i])
                nMin = p[i];
            else{
                ans=max(ans,p[i]-nMin);
            }
        }
        return ans;
    }
};