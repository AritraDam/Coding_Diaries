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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(auto &x: v)
        cin>>x;

        ans = *max_element(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])continue;
            int x = v[i+1];
            for(int j = i;j>=0;j--)
            {
                  
            }
        }
    }
    return 0;
}