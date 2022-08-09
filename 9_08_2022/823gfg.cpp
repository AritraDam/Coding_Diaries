typedef long long int ll;
class Solution {
public:
    int combo(vector<int>& arr)
    {
        int mod = 1e9+7;
        sort(arr.begin(),arr.end());
        unordered_map<int,ll> m;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
        for(int i=1;i<arr.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[i]%arr[j] == 0)
                {
                    if(m[arr[i]/arr[j]]!=0)
                        m[arr[i]]=(m[arr[i]]+(m[arr[j]]*m[arr[i]/arr[j]]))%mod;
                }
            }
        }
        int sum =0;
        for(auto &it:m)
            sum=(sum+it.second)%mod;
        return sum;
    }
    int numFactoredBinaryTrees(vector<int>& arr) {
        return combo(arr);
    }
};