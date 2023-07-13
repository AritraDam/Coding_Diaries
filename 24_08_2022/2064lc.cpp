class Solution {
public:
    int minimizedMaximum(int n, vector<int>& q) {
        sort(q.begin(),q.end());
        int l=1,r=*max_element(q.begin(),q.end()),ans=*max_element(q.begin(),q.end());
        while(l<=r)
        {
           int mid = l+(r-l)/2;
            int sum =0;
            for(auto &it:q)
            {
                sum+=ceil((float)it/mid);
            }
            if(sum>n){
             l=mid+1;
            }
            else{
                ans= min(ans,mid);
                r=mid-1;
            }
        }
        return ans;
    }
};