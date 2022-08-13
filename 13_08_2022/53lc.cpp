class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max = nums[0];
        int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            Max = max(sum,Max);
            if(sum<1)
                sum = 0;
        }
        return Max;
    }
};