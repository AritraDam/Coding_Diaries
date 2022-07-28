class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> x;
        string y="";
        x.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(x.empty())
                x.push(s[i]);
            else if(x.top() == s[i])
                x.pop();
            else
                x.push(s[i]);
        }
        while(!x.empty())
        {
            y+=x.top();
            x.pop();
        }
        reverse(y.begin(),y.end());
        return y;
    }
};