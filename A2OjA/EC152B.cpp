#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// bool comparexa(vector<ll> first,vector<ll> second)
// {
//     return first[1]<second[1];
// }
bool comparexb(vector<ll> first,vector<ll> second)
{
    if(first[0] == second[0])
        return first[1]<second[1];

    return first[0]>second[0];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;cin>>t;
    while(t--)
    {
        ll n,k,w;
        cin>>n>>k;
        vector<ll> v(n),d(n);

        for(auto &x:v)
        {
            cin>>x;
            x%=k;
            if(!x) x =k;
        }
        iota(d.begin(),d.end(),0);

        sort(d.begin(),d.end(),[&](auto i,auto j){
            if(v[i]==v[j]) return d[i]<d[j];
            return v[i]>v[j];
        });
        // sort(v.begin(),v.end(),comparexa);

        // sort(d.begin(),d.end(),comparexb);
        
        // for(int i=0;i<v.size();i++)
        // {
        //     cout<<v[i][1]<<" ";
        // }
        for(int i=0;i<d.size();i++)
        cout<<d[i]+1<<" ";
        cout<<endl;
    }
    return 0;
}