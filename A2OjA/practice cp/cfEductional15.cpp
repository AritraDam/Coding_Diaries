#include<bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define all(o) (o).begin(), (o).end()
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;cin>>n;
    vi v(n);
    rep(i,n) cin>>v[i];
    int count =1;int ans = count;
    for(int i=1;i<n;i++)
    {
        if(v[i]>v[i-1])
        {
            count++;
            ans=max(count,ans);
        }
        else
        {
            count =1;
        }
    }
    ans = max(count,ans);
    cout<<ans;
    return 0;
}