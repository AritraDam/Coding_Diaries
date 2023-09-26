#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;cin>>s;
    // string ans;
    for(int i=0;i<s.length();i++)
    {
        
        if(s[i]>='5' && s[i]<='9')
        {
            if(i==0 && s[i]=='9')
            {
                continue;
            }
            else
            {
                int a = s[i]-'0';
                a= 9-a;
                s[i] = a+'0';
            }
        }
        // else ans.push_back(s[i]);
    }
    cout<<s;
    return 0;
}