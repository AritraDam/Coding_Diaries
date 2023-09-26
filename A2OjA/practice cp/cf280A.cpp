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
    ll sum=0,nx=0,ans=0;
    while(sum<=n)
    {
        ans++;
        nx+=ans;
        sum+=nx;
    }
    cout<<ans-1;
    return 0;
}