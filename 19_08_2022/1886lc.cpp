class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>>& mat)
    {   int n =mat.size();
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
        {   vector<int>w;
            for(int j=n-1;j>=0;j--)
                w.push_back(mat[j][i]);
            v.push_back(w);
        }
        return v;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        vector<vector<int>> v;
        int n=mat.size();
        v = mat;
        
        for(int i=0;i<4;i++)
        {   int flag =0;
            v = rotate(v);
            for(int j=0;j<n;j++)
            {
                if(v[j]==target[j])
                    flag++;
                else break;
            }
         if(flag == n) return true;
        }
        return false;
    }
};