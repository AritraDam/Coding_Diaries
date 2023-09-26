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
    ll n;cin>>n;
    ll ans =0;
    while(n)
    {
        if(n%10 == 7 || n%10==4)
        ans++;
        n/=10;
    }
    if(ans==4 || ans ==7) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}