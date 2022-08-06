class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int max  = *max_element(nums.begin(),nums.end());
        int min =  *min_element(nums.begin(),nums.end());
        min+=k;
        int hola = max-min;
        if(hola<= k && hola>=0)
            return 0;
        else if(hola>k)
        {
            max-=k;
            return max-min;
        }
        else
        {
            return 0;
        }
    }
};