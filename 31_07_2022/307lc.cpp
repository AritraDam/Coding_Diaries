class NumArray {
public:
    vector<int> nums;
    int sum =0;
    NumArray(vector<int>& Nums) {
        for(auto &it:Nums){
         nums.push_back(it);
         sum+=it;
        }
    }
    
    void update(int index, int val) {
        sum+=(val-nums[index]);
        nums[index] = val;
    }
    
    int sumRange(int left, int right) {
        if(right-left< nums.size()/2)
        return accumulate(nums.begin()+left,nums.begin()+right+1,0);
        else
        return sum - accumulate(nums.begin(),nums.begin()+left,0) -
            accumulate(nums.begin()+right+1,nums.end(),0);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */