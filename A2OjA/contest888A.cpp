#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;cin>>t;
    while(t--)
    {
        ll n,m,k,H,w,ans=0;
        cin>>n>>m>>k>>H;
        unordered_map<ll,ll> mx;
        for(int i=0;i<n;i++)
        {
            cin>>w;
            mx[abs(H-w)]++;
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(i!=j){
                ll x = abs((i-j)*k);
                if(mx[x]>0){
                    ans+=mx[x];
                    mx[x]=-1;
                }
                }
            }
        }
        cout<<ans<<endl; 
    }
    return 0;
}