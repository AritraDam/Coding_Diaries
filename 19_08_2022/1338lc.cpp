class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> m;
        vector<int> v;
        for(int i=0;i<arr.size();i++)
        {
            if(m.find(arr[i])==m.end())
                m[arr[i]]=1;
            else
                m[arr[i]]++;
        }
        for(auto &it:m)
        {
         v.push_back(it.second);
         // cout<<it.first<<" "<<it.second<<endl;
        }
        sort(v.begin(),v.end(),greater<int>());
        int dist = arr.size()/2;
        int count =0; 
        for(int i=0;i<v.size() && dist>0;i++)
        {
            // cout<<v[i]<<" "<<dist<<endl;
            dist-=v[i];
            count++;
        }
        return count;
    }
};