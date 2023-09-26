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
        ll a,b,n;
        cin>>a>>b>>n;
        ll Min = min(a,b);
        ll Max = max(a,b);
        ll ans =0; 
        while(Max<=n)
        {
            ll sum = Min+Max;
            Min = Max;
            Max = sum;
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}