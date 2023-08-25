#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,d,w,longest = 0;
        cin>>n>>d;
        vector<ll> v;
        
        for(ll i =0;i<n;i++)
        {
            cin>>w;
            v.push_back(w);
        }
        if(v.size()==1)
        {
            cout<<0<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        ll count = 0;
        for(ll i =1;i<v.size();i++)
        {
            if(v[i]-v[i-1]<=d)
            count++;
            else
            {
                longest = max(longest,count);
                count = 0;
            }
        }
        longest = max(longest,count);
        // cout<<longest<<endl;
        if(longest == 0)
        cout<<v.size()-1<<endl;
        else
        cout<<v.size()-(longest+1)<<endl;
    }
    return 0;
}