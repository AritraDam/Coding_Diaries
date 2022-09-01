class Solution {
public:
void pacific(vector<vector<int>>& heights,vector<vector<bool>>& p,int i,int j
                ,int val,int n,int m)
    {
        if(i<0 || j<0 || i==n || j==m || p[i][j]==true)
            return;
        if(heights[i][j]<val) return;
        else
        {
            p[i][j]= true;
            pacific(heights,p,i+1,j,heights[i][j],n,m);
            pacific(heights,p,i-1,j,heights[i][j],n,m);
            pacific(heights,p,i,j+1,heights[i][j],n,m);
            pacific(heights,p,i,j-1,heights[i][j],n,m);
        }
            
    }
void atlantic(vector<vector<int>>& heights,vector<vector<bool>>& a,int i,int j
                ,int val,int n,int m)
{
    if(i<0 || j<0 || i==n || j==m || a[i][j]==true)
            return;
        if(heights[i][j]<val) return;
        else
        {
            a[i][j]= true;
            atlantic(heights,a,i+1,j,heights[i][j],n,m);
            atlantic(heights,a,i-1,j,heights[i][j],n,m);
            atlantic(heights,a,i,j+1,heights[i][j],n,m);
            atlantic(heights,a,i,j-1,heights[i][j],n,m);
        }
}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size(),m=heights[0].size();
    vector<vector<bool>> p(n,vector<bool>(m,false)),a(n,vector<bool>(m,false));
        vector<vector<int>>v;
        for(int i=0;i<m;i++)
        {
            pacific(heights,p,0,i,heights[0][i],n,m);
        }
        for(int i=0;i<n;i++)
        {
            pacific(heights,p,i,0,heights[i][0],n,m);
        }
        for(int i=0;i<n;i++)
        {
            atlantic(heights,a,i,m-1,heights[i][m-1],n,m);
        }
        for(int i=0;i<m;i++)
        {
            atlantic(heights,a,n-1,i,heights[n-1][i],n,m);
        }
        for(int i=0;i<n;i++)
        {
            
            for(int j=0;j<m;j++)
            {
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++)
        {
            vector<int>x(2,0);
            for(int j=0;j<m;j++)
            {
                if(p[i][j]==a[i][j] && p[i][j]!=0)
                {
                    x[0]=i;x[1]=j;
                    v.push_back(x);
                }
            }
        }
        return v;
    }
};