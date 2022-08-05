class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for(int i=1;i<s.length();i++)
        {
            if(n%i == 0)
            {
                bool flag = true;
                string x = s.substr(0,i);
                for(int j=0;j<s.length();j+=x.length())
                {
                    if(x!= s.substr(j,i))
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag)
                    return true;
            }
        }
        return false;
    }
};