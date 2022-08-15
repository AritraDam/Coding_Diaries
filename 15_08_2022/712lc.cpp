class Solution {
public:
    int lcs(string x,string y)
    {
        string f="";
        int n=x.length(),m=y.length();
        int t[n+1][m+1];
        for(int i=0;i<=n;i++)
            t[i][0]=0;
        for(int i=0;i<=m;i++)
            t[0][i]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(x[i-1]==y[j-1])
                    t[i][j]=int(x[i-1])+t[i-1][j-1];
                else
                    t[i][j] = max(t[i][j-1],t[i-1][j]);
            }
        }
        return t[n][m];
    }
    int minimumDeleteSum(string s1, string s2) {
        int asciis1 =0;
        int asciis2 =0;
        int asciix =0;
        int x;
        for(int i=0;i<s1.length();i++)
        {
            asciis1+=s1[i];
        }
        for(int i=0;i<s2.length();i++)
        {
            asciis2+=s2[i];
        }
        x = lcs(s1,s2);
        return asciis1+asciis2-(2*x);
    }
};


// 0 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 1 1 1 1 1 1 1 1 
// 0 0 0 1 1 1 1 1 1 1 1 
// 0 0 0 1 1 1 1 1 1 1 1 
// 0 0 0 1 1 1 1 1 1 1 1 
// 0 0 0 1 1 1 1 1 1 1 1 
// 0 0 0 1 1 1 2 2 2 2 2 
// 0 0 0 1 1 1 2 2 2 2 2 
// 0 0 0 1 1 1 2 2 2 2 2 
// 0 0 0 1 1 1 2 2 2 2 2 
// 0 0 0 1 1 2 2 2 2 2 2 