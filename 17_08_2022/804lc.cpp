class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> f = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_map<string,int> m;
        for(int i=0;i<words.size();i++)
        {   string x="";
            for(int j=0;j<words[i].length();j++)
            {
                x+=f[words[i][j]-'a'];
            }
            if(m.find(x) == m.end())
                m[x] =1;
        }
        return m.size();
    }
};