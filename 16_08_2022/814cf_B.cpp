#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        bool flag =false;
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,ll>>v;
        for(ll i=1;i<n;i+=2)
        {
            if(((i+k)*(i+1))%4==0)
            {
                v.push_back(make_pair(i,i+1));
                // cout<<i<<" "<<i+1<<endl;
            }
            else if(((i+1+k)*(i))%4==0)
            {
                v.push_back(make_pair(i+1,i));
                // cout<<i+1<<" "<<i<<endl;
            }
            else flag =true;

            if(flag)
            break;
        }
        if(v.size()!=(n/2))
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(auto &it:v)
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
    return 0;
}