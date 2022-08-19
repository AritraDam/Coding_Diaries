class Solution {
public:
    string LCS(string s1,string s2)
    {
        string f="";
        int t[s1.length()+1][s2.length()+1];
        for(int i=0;i<=s1.length();i++)
            t[i][0] = 0;
        for(int i=0;i<=s2.length();i++)
            t[0][i] = 0;
        for(int i=1;i<=s1.length();i++)
        {
            for(int j=1;j<=s2.length();j++)
            {
                if(s1[i-1]==s2[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
                
        }
        cout<<t[s1.length()][s2.length()]<<endl;
        int i=s1.length(),j=s2.length();
        while(i>0 && j>0)
        {
            if(s1[i-1]==s2[j-1])
            {
                f+=s1[i-1];
                i--;j--;
            }
            else
            {
                if(t[i-1][j]>t[i][j-1])
                {
                    f+=s1[i-1];
                    i--;
                }
                else {
                    f+=s2[j-1];
                    j--;
                }
            }
        }
        while(j>0)
        {
            f+=s2[j-1];
            j--;
        }
        while(i>0)
        {
            f+=s1[i-1];
            i--;
        }
        reverse(f.begin(),f.end());
        cout<<f<<endl;
        return f;
        
    }
    string shortestCommonSupersequence(string str1, string str2) {
        return LCS(str1,str2);
    }
};