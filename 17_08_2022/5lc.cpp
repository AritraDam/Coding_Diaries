class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int t[n][n];
        int maxLength = 1;
        int start = 0;
        for(int i=0;i<n;i++)
            t[i][i] =1;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
             t[i][i+1] = 1;
             maxLength =2;
                start =i;
            }
            else
                t[i][i+1] =0;
        }
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<n-k+1;i++)
            {
                int j = i+k-1;
                if(t[i+1][j-1]==1 && (s[i] == s[j]))
                {
                    maxLength = k;
                    start = i;
                    t[i][j] =1;
                }
                else
                    t[i][j] =0;
            }
        }
        
        return s.substr(start,maxLength);
    }
};