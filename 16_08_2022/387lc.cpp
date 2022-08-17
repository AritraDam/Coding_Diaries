class Solution {
public:
    bool flag = false;
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])==m.end())
                m[s[i]]=1;
            else m[s[i]]++;
        }
        int i=0;
        for(auto &it:s)
        {
            if(m[it]==1)
            {
                flag = true;
                break;
            }
            i++;
        }
        if(flag)
            return i;
        else return -1;
    }
};