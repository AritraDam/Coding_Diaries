class Solution {
public:
    vector<int> frequency(string s){
        vector<int> x(26,0);
        for(auto &it: s){
            x[it-'a']++;
        }
        return x;
    }
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> x(26,0);
        vector<string> xx;
        for(auto &it:words2){
            vector<int> y = frequency(it);
            for(int i=0;i<26;i++){
                x[i]=max(x[i],y[i]);
            }
        }
        for(auto &it:words1){
            bool flag = true;
            vector<int> y = frequency(it);
            for(int i=0;i<26;i++)
            {
                if(y[i]<x[i])
                {
                    flag = false;
                    break;
                }  
            }
            if(flag)
            xx.push_back(it);  
        }
        return xx;
    }
};