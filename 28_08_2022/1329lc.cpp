class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        for(int i=m-1;i>=0;i--)
        {   vector<int> v;
            for(int j=i,k=0;j<m && k<n;j++,k++)
                v.push_back(mat[k][j]);
         
         // for(auto &it:v)
         //     cout<<it<<" ";
         // cout<<endl;
            sort(v.begin(),v.end());
            for(int j=i,k=0;j<m && k<n;j++,k++)
                mat[k][j]=v[k];
        }
        for(int i=1;i<n;i++)
        {   vector<int> v;
            for(int j=i,k=0;j<n && k <m ;j++,k++)
                v.push_back(mat[j][k]);
         
         // for(auto &it:v)
         //     cout<<it<<" ";
         // cout<<endl;
            sort(v.begin(),v.end());
            for(int j=i,k=0;j<n && k <m ;j++,k++)
                mat[j][k] = v[k];
            
        }
        return mat;
    }
};