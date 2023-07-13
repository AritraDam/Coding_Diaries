#include<bits/stdc++.h>
using namespace std;


int lis(vector<int> &nums)
{
    int len = 1;
    int n = nums.size();
    vector<int> dp(n,1);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(nums[i]>nums[j])
            len = max(dp[i],1+dp[j]);
        }
    }
    return len;
}