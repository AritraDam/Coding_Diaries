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
    vi v(3);
    rep(i,3)
    cin>>v[i];
    sort(all(v));
    int ans = INT_MAX;
    for(int i=v[0];i<=v[2];i++)
    {
        int s =0;
        rep(j,3)
        {
            s+=abs(i-v[j]);
        }
        ans = min(s,ans);
    }
    cout<<ans;
    return 0;
}