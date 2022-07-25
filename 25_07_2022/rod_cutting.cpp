#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll a[n];
        vector<ll> adj[n];
        ll deg[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            deg[i]=0;
        }
        ll cakes =m;
        ll ans = 0;
        ll x,y;
        ll s1=1000000,s2=1000000;
        while(m--){
            cin>>x>>y;
            adj[x-1].push_back(y-1);
            adj[y-1].push_back(x-1);
            deg[x-1]++;
            deg[y-1]++;
        }
        if(cakes%2==0){
            cout<<0<<endl;
            continue;
        }
        else{
            for(int i=0;i<n;i++){
                ll l = deg[i];
                if(l%2 ==1){
                    s1 = min(s1,a[i]);
                }
                else{
                    for(int j=0;j<l;j++){
                        if(deg[adj[i][j]]%2==0)
                        s2 = min(s2,a[i]+a[adj[i][j]]);
                    }
                }
            }
        }
        ans = min(s1,s2);
        cout<<ans<<endl;
        
    }
	return 0;
}


