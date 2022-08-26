class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        string y =""; 
        sort(s.begin(),s.end());
        for(int i=0;i<30;i++)
        {
            int x = pow(2,i);
            y=to_string(x);
            sort(y.begin(),y.end());
            // cout<<x<<s<<endl;;
            if(s==y) return true;
        }
        return false;
    }
};