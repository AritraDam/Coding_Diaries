class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> v;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int>s1,s2;
        for(int i=0;i<nums1.size();i++){
            if(!binary_search(nums2.begin(),nums2.end(),nums1[i]))
                s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            if(!binary_search(nums1.begin(),nums1.end(),nums2[i]))
            s2.insert(nums2[i]);
        }
        // for(auto &it:s1)
        //     cout<<it<<" ";
        nums1.clear();nums2.clear();
        for(auto &it:s1)
            nums1.push_back(it);
        for(auto &it:s2)
            nums2.push_back(it);
        v.push_back(nums1);
        v.push_back(nums2);
        return v;
            
    }
};