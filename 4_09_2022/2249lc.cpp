class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        unordered_map<int,set<int>> m;
        for(int i=0;i<circles.size();i++)
        {
            for(int k=0;k<=circles[i][2];k++)
            {
                m[circles[i][0]+k].insert(circles[i][1]);
                m[circles[i][0]-k].insert(circles[i][1]);
                for(int j=1;j<=circles[i][2];j++){
                    if(pow((circles[i][0]+k)-circles[i][0],2)+pow((circles[i][1]+j)-circles[i][1],2) <= pow(circles[i][2],2))
                    m[circles[i][0]+k].insert(circles[i][1]+j);
                }
                for(int j=1;j<=circles[i][2];j++){
                    if(pow((circles[i][0]+k)-circles[i][0],2)+pow((circles[i][1]-j)-circles[i][1],2) <= pow(circles[i][2],2))
                    m[circles[i][0]+k].insert(circles[i][1]-j);
                }
                for(int j=1;j<=circles[i][2];j++){
                    if(pow((circles[i][0]-k)-circles[i][0],2)+pow((circles[i][1]+j)-circles[i][1],2) <= pow(circles[i][2],2))
                    m[circles[i][0]-k].insert(circles[i][1]+j);
                }
                for(int j=1;j<=circles[i][2];j++){
                    if(pow((circles[i][0]-k)-circles[i][0],2)+pow((circles[i][1]-j)-circles[i][1],2) <= pow(circles[i][2],2))
                    m[circles[i][0]-k].insert(circles[i][1]-j);
                }
                
            }       
        }
        int ans=0;
        for(auto &it: m)
        {
            ans+=it.second.size();
            
            cout<<it.first<<"->"<<endl;
            for(auto &x:it.second)
                cout<<x<<" ";
            cout<<endl;
        }
        return ans;
    }
};








            // for(int j=1;j<=circles[i][2];j++)
            //     m[circles[i][0]-j].insert(circles[i][1]);


            // for(int j=1;j<=circles[i][2];j++)
            //     m[circles[i][0]+j].insert(circles[i][1]);