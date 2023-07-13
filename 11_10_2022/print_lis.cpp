#include<bits/stdc++.h>
using namespace std;


void lis(vector<int> &nums,map<int,int> m)
{
    int len = 1;
    int n = nums.size();
    vector<int> dp(n,1);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(nums[i]>nums[j])
            {
                len = max(dp[i],1+dp[j]);
                m[nums[i]] = j;
            }
        }
    }
    int index = max_element(dp.begin(),dp.end())  - dp.begin(); 
    vector<int> v;
    v.push_back(nums[index]);
    while(index != m[index])
        v.push_back(nums[index]);
        index = m[index];
    }
    reverse(v.begin(),v.end());
    print(v);'''
}