typedef long long int ll;
class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        vector<int>length;
        vector<int>width;
        ll maxH=-1,maxW=-1;
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        length.push_back(0);
        width.push_back(0);
        for(int i=0;i<verticalCuts.size();i++)
        {
            width.push_back(verticalCuts[i]);
        }
        width.push_back(w);
        for(int i=0;i<horizontalCuts.size();i++)
        {
            length.push_back(horizontalCuts[i]);
        }
        length.push_back(h);
        for(int i=0;i<width.size()-1;i++)
        {
            if(width[i+1]-width[i]>maxW)
                maxW=width[i+1]-width[i];
        }
        for(int i=0;i<length.size()-1;i++)
        {
            if(length[i+1]-length[i]>maxH)
                maxH=length[i+1]-length[i];
        }
        
        return (maxH*maxW)%1000000007;
        
    }
};