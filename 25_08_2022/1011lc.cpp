class Solution {
public:
    int shipWithinDays(vector<int>& weight, int days) {
        int n = weight.size();
        int l = *max_element(weight.begin(),weight.end()),ans,r;
        ans = r =  accumulate(weight.begin(),weight.end(),0);
        while(l<=r)
        {   int count =0;
            int mid = l+(r-l)/2;
            int sum =0;
            for(int i=0;i<weight.size();i++){
                sum+=weight[i];
                if(sum>mid){
                    count++;
                    sum=weight[i];
                }
            }
         count+=1;
         cout<<mid<<" "<<l<<" "<<r<<" "<<count<<endl;
            if(count>days)
                l=mid+1;
            else{
                ans = min(ans,mid);
                r= mid-1;
            }
        }
        return ans;
    }
};