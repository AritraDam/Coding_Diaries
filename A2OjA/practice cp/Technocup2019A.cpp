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
    int n;cin>>n;
    int ans=0;
    vi v(n);
    rep(i,n)
    {
        cin>>v[i];
        ans= ans | v[i];
        // cout<<ans<<endl;
    }
    if(ans) cout<<"Hard\n";
    else cout<<"Easy\n";
    return 0;
}