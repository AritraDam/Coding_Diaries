class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n =grid.size(),m=grid[0].size();
        int a[n][m];
        a[0][0]=grid[0][0];
        for(int i=1;i<m;i++)
            a[0][i] = a[0][i-1]+grid[0][i];
        for(int i=1;i<n;i++)
            a[i][0] = a[i-1][0]+grid[i][0];
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                a[i][j] = min(a[i-1][j]+grid[i][j],a[i][j-1]+grid[i][j]);
            }
        }
        return a[n-1][m-1];
    }
};