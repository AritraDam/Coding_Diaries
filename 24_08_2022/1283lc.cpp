class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size(),l=1,r,mid,sum,ans=INT_MAX;
        sort(nums.begin(),nums.end());
        r = nums[n-1]+1;
        while(r>=l)
        {
             mid = l+(r-l)/2;
             sum =0;             
             for(auto &it:nums)
             {
                 if(it<=mid)
                     sum+=1;
                 else if(it%mid ==0)
                     sum+=it/mid;
                 else{
                     sum+=((it-(it%mid))/mid)+1;
                 }
             }
            // cout<<mid<<" "<<sum<<endl;
           if(sum<=threshold)
           {
               ans=min(ans,mid);
               r=mid-1;
           }
           else{
               l=mid+1;
           }
        }
        return ans;
    }
};