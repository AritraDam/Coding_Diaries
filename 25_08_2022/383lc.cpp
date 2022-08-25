class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       vector<int> r(26,0),m(26,0);
        bool flag = false;
       for(int i=0;i<ransomNote.length();i++)
           r[ransomNote[i]-'a']++;
        for(int i=0;i<magazine.length();i++)
           m[magazine[i]-'a']++;
        
        for(int i=0;i<26;i++)
            if(r[i]>m[i])
            {
                flag = true;
                break;
            }
        if(flag) return false;
        return true;
        
    }
};