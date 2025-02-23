typedef long long int ll;
class Solution {
public:
    int uniquePaths(int m, int n) {
        int a[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                    a[i][j] = 0;
                else if(i==1 && j==1)
                    a[i][j] = 1;
                else if(i==1)
                    a[i][j] = 1;
                else if(j==1)
                    a[i][j] = 1;
                else
                    a[i][j] = a[i-1][j]+a[i][j-1];
            }
        }
        return a[m][n];
    }
};