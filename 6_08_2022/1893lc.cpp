// (ranges[i][0]>=left && ranges[i][0]<=right) ||
// (ranges[i][1]>=left && ranges[i][1]<=right) 

class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        bool flag = false;
        for(int j=left;j<=right;j++)
        { flag = false;
        for(int i=0;i<ranges.size();i++)
        {
            if((j>=ranges[i][0] && j<=ranges[i][1]))
            {
                flag = true;
            }
        }
            if(!flag)
                break;
        }
        if(flag)
            return true;
        else
            return false;
    }
};