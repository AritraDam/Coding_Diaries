class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int MAX=1;
        for(int i=0;i<points.size();i++)
        {   int maxCurr=0;
            unordered_map<string,int> m;
            for(int j=i+1;j<points.size();j++)
            {
                int ydiff = points[j][1]-points[i][1];
                int xdiff = points[j][0] - points[i][0];
                int Gcd = __gcd(ydiff,xdiff);
                ydiff/=Gcd;
                xdiff/=Gcd;
                if(xdiff<0)
                {
                    xdiff*=-1;
                    ydiff*=-1;
                }   
                m[to_string(ydiff)+"_"+to_string(xdiff)]++;
                maxCurr = max(maxCurr,m[to_string(ydiff)+"_"+to_string(xdiff)]+1);
            }
         MAX=max(maxCurr,MAX);
        }
        return MAX;
    }
};