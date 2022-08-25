class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int l =1,r=piles[n-1],sum,ans= piles[n-1];
        while(l<=r){
           sum = 0;
           int mid = l+(r-l)/2;
           for(auto &it: piles){
               sum+=ceil((double)it/mid);
           }
            
           if(sum>h)
               l=mid+1;
            else
            {
                r = mid-1;
                ans = min(ans,mid);
            }
            // cout<<mid<<" "<<sum<<" "<<l<<" "<<r<<" "<<ans<<endl;
        }
        return ans;
    }
};