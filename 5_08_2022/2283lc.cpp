class Solution {
public:
    bool digitCount(string num) {
        vector<int> v(10,0);
        for(int i=0;i<num.length();i++)
        {
            v[num[i]-'0']++;
        }
        bool flag = true;
        for(int i=0;i<num.length();i++)
        {
            if((num[i]-'0') != v[i])
            {
                flag = false;
                break;
            }
        }
        if(flag)
            return true;
        else
            return false;
    }
};