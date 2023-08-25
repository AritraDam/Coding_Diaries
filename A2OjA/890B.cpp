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
        int flag =0;
        vector<ll> v(n);
        ll sum =0;
        ll xx = 0;
        for(auto &x:v)
        {
            cin>>x;
            if(x==1)
            sum+=1;
        }
        if(n==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            if(sum<=xx)
            {
                flag =1;break;
            }
            if(v[i]!=1)
            {
                if(sum<=v[i]-1)
                {
                    flag =1;break;
                }
                xx+= v[i]-1;
            }
        }
        if(sum<=xx)
        {
        flag =1;
        }
        // cout<<sum<<" "<<xx<<" ";
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}