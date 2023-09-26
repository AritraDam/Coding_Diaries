#include<bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define all(o) (o).begin(), (o).end()
using namespace std;
typedef long long int ll;
typedef vector<int> vi;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int k=INT_MAX,l=INT_MIN;
        rep(i,s.length())
        {
            if(s[i]=='1')
            {
                k=i;break;
            }
        }
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                l=i;break;
            }
        }
        int ans=0;

        for(int i=k;i<=l;i++)
        {
            if(s[i]=='0') ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}