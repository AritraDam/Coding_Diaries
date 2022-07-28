class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> l (ratings.size(),1);
        vector<int> r (ratings.size(),1);
        
        for(int i=0;i<ratings.size()-1;i++)
            if(ratings[i]<ratings[i+1])
                l[i+1]= 1+l[i];
        for(int i=ratings.size()-1;i>0;i--)
            if(ratings[i]<ratings[i-1])
                r[i-1] = 1+r[i];
        int sum=0;
        for(int i=0;i<ratings.size();i++)
            sum+=max(l[i],r[i]);
        return sum;
    }
};