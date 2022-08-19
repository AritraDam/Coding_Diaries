class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<string,int> m;
        for(auto &it:words)
        {
            if(m.find(it)==m.end())
                m[it]=1;
            else m[it]++;
        }
        int count=0;
        for(auto &it:m)
        {
            int i=0,j=0;
            while(i<it.first.length() && j<s.length())
            {
                if(s[j]==it.first[i])
                    i++;
                j++;
            }
            if(i==it.first.length())
                count+=it.second;
        }
        return count;
    }
};