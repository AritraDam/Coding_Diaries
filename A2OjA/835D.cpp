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
        int n,count =0;
        cin>>n;
        vector<ll> v;ll w;
        for(int i=0;i<n;i++)
        {
            cin>>w;
            if(v.size()==0) v.push_back(w);

            else if(v.back()!=w) v.push_back(w);
        }
        if(v.size()==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        
        // cout<<"NO"<<endl;
        if(v[0]<v[1]){count++;}
        if(v[v.size()-1]<v[v.size()-2]){count++;}
        
        // cout<<count<<endl;
        for(int i=1;i<v.size()-1;i++)
        {
            if(v[i]<v[i-1] && v[i]<v[i+1]) count++;
        }
        if(count>1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}