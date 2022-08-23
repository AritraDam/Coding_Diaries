class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> m,x;
        vector<int> v;
        if(p.length()>s.length())
            return v;
        for(auto &it:p)
            m[it]++;
        for(int i=0;i<p.length();i++)
        {
            x[s[i]]++;
        }
        int count=0;
        for(auto &it:m)
        {
            if(x.find(it.first)!=x.end())
            {
                if(it.second == x[it.first])
                    count++;
            }
            else break;
        }
        if(m.size()==count) v.push_back(0);
        for(int i=p.length();i<s.length();i++)
        {
            count =0;
            x[s[i]]++;
            x[s[i-p.length()]]--;
            for(auto &it:m)
          {
            if(x.find(it.first)!=x.end())
            {
                if(it.second == x[it.first])
                    count++;
            }
            else break;
          }
         if(m.size()==count) v.push_back(i-p.length()+1);
        }
       return v; 
    }
};