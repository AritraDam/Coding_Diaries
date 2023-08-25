#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll w;
        ll Min = INT_MAX;
        cin>>n;
        int flag = 0;
        vector<ll> v;
        for(int i=0;i<n;i++)
        {
            cin>>w;
            v.push_back(w);
        }
        for(int i=1;i<n;i++)
        {
            if(v[i-1]>v[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=1;i<n;i++)
        {
            ll a = v[i-1],b=v[i],x=0;
            x = (a+b)/2;
            x+=1;
            x = x-a;
            Min = min(Min,x);
        }
        if(Min == 0) cout<<1<<endl;
        else
        cout<<Min<<endl;
    }
    return 0;
}