#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--){
        bool flag = true;
        unordered_map<char,int> m,x;
        m['T']=1;
        m['i']=1;
        m['m']=1;
        m['u']=1;
        m['r']=1;
        int n;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            x[s[i]]++;
        }
        if(n> 5 || n<5)
        cout<<"NO"<<endl;
        else{
            for(auto &it:m)
            {
                if(it.second!=x[it.first])
                {
                    flag =false;
                    break;
                }
            }
                if(flag) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            
        }    
    }
    return 0;

}