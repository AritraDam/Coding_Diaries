class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>x(26,0);
        vector<string> f;
        for(int i=0;i<words[0].length();i++)
        {
            x[words[0][i]-'a']++;
        }
        for(int i=1;i<words.size();i++)
        {    vector<int> y(26,0);
            for(int j=0;j<words[i].length();j++)
                y[words[i][j]-'a']++;
         
            for(int j=0;j<26;j++)
                x[j]=min(x[j],y[j]);
        }
        for(int i=0;i<26;i++)
        {
            while(x[i]>0)
            {
                string w="";
                char a = 'a'+i;
                w+=a;
                f.push_back(w);
                x[i]--;
            }
        }
        return f;
    }
};