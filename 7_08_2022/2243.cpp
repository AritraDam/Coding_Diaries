class Solution {
public:
    string digitSum(string s, int k) {
        string x="";
        while(s.length()>k)
        {
            string f="";
            int sum =0;
            for(int i=0;i<s.length();i++)
            {
                sum+=s[i]-'0';
                x+=s[i]-'0';
                if((i+1)%k==0)
                {
                    f+=to_string(sum);
                    sum=0;
                    x="";
                }
            }
            if(x.length()>0)
                f+=to_string(sum);
            s=f;
        }
        cout<<s;
        return s;
    }
};