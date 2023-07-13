//binary search method using dp
// o(nlogn)   o(n)
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int len = 1;
        vector<int> prev ;prev.push_back(nums[0]);
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>prev.back())
            {
                len++;
                prev.push_back(nums[i]);
            }
            else{
                int index = lower_bound(prev.begin(),prev.end(),nums[i]) -     prev.begin();
                prev[index] = nums[i];
            }
        }
        return len>=3;
    }
};