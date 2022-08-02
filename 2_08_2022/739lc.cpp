class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<pair<int,int>>s;
        vector<int> ans(n);
        s.push({temperatures[n-1],n-1});ans[n-1]=0;
        for(int i=n-2;i>=0;i--){
            while(true){
                if(s.empty()){
                    s.push({temperatures[i],i});
                    ans[i]=0;
                    break;
                }
                else if(s.top().first<=temperatures[i])
                    {
                    s.pop();
                }
                else{
                    ans[i] = s.top().second - i;
                    s.push({temperatures[i],i});
                    break;
                }
            }
        }
        return ans;
    }
};