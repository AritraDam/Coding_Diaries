class Solution {
public:
    static bool compare(const pair<char,int> &a,const pair<char,int> &b)
    {
        return (a.second>b.second);
    }
    string frequencySort(string s) {
        string f="";
        unordered_map<char,int> m;
        vector<pair<char,int>> v;
        for(auto &it:s)
        {
            if(m.find(it)==m.end())
                m[it]=1;
            else m[it]++;
        }
        for(auto &it:m)
          v.push_back(make_pair(it.first,it.second));
        
        sort(v.begin(),v.end(),compare);
        for(auto &it:v)
        {
            while(it.second)
            {
                f+=it.first;
                it.second--;
            }
        }
        return f;
    }
};