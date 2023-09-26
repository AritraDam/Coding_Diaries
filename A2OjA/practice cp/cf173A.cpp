#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;cin>>n;
    int ans =0;
    while(n--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='+')
            {
                ans++;
                break;
            }
            else if(s[i]=='-')
            {
                ans--;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}