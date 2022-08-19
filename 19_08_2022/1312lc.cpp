class Solution {
public:
    int lcs(string x,string y,int n)
    {
        int t[n+1][n+1];
		    for(int i=0;i<=n;i++)
		    t[i][0]=0;
		    for(int i=0;i<=n;i++)
		    t[0][i]=0;
		    for(int i=1;i<=n;i++)
		    {
		        for(int j=1;j<=n;j++)
		        {
		            if(x[i-1]==y[j-1])
		            t[i][j]=1+t[i-1][j-1];
		            else
		            t[i][j] = max(t[i-1][j],t[i][j-1]);
		        }
		    }
		    return t[n][n];
		}
    int minInsertions(string s) {
        string x = s;
        reverse(s.begin(),s.end());
        string y = s;
        return s.length()-lcs(x,y,s.length());
    }
};