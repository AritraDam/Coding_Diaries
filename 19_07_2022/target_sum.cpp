class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        target = abs(target);
        int total = accumulate(nums.begin(),nums.end(),0);
        if(total < target ||(target+total)%2!=0)
            return 0;
        int sum = (target + total)/2;
        int n = nums.size();
        int a[n+1][sum+1];
        for(int i=0;i<=sum;i++)
            a[0][i] = 0;
        for(int i=0;i<=n;i++)
            a[i][0] = 1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(nums[i-1]<=j)
                    a[i][j] = a[i-1][j-nums[i-1]] + a[i-1][j];
                else
                    a[i][j] = a[i-1][j];
            }
        }
        return a[n][sum];
        
    }
};