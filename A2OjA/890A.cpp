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
        int n;cin>>n;
        int ans =0;
        vector<ll> v(n);
        vector<ll> x;
        for(auto &x:v)
        cin>>x;

        x = v;
        sort(x.begin(),x.end());
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]!=x[i])
            {
               ans = x[i];
               break; 
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}