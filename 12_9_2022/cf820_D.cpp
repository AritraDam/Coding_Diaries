#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool comparex(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.second == b.second) return a.first>b.first;
    return a.second>b.second;
}
void solve()
{
    int n,ans =0;
        cin>>n;
        vector<ll>x(n),y(n);
        vector<pair<ll,ll>> p;
        for(int i=0;i<n;i++)
            cin>>x[i];
        for(int i=0;i<n;i++)
            cin>>y[i];
        for(int i=0;i<n;i++)
            p.push_back(make_pair(x[i],y[i]));
        sort(p.begin(),p.end(),comparex);
        // for(auto &it:p)
        // cout<<it.first<<" "<<it.second<<endl;
        for(int i=0;i<p.size();)
        {
            if(i+1<p.size())
            {
                if(p[i].first+p[i+1].first<=p[i].second+p[i+1].second)
                {
                    ans++;i+=2;
                }
                else i++;
            }
            else break;
        }
        cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}